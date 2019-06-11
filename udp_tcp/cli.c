#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<sys/types.h>

main(int argc, char **argv)
{
	int fd, ic;
	char buf[80];
	struct sockaddr_in saddr;

	//socket() system call
	fd = socket(AF_INET, SOCK_STREAM, 0);
	if(fd == -1)
	{
		perror("socket");
	}
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(7777);
	//saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	inet_aton("127.0.0.1", &saddr.sin_addr.s_addr);
	//connect() system call
	ic = connect(fd, (const struct sockaddr *)&saddr, sizeof(saddr));
	if(ic == -1)
	{

		perror("connect");
		return;
	} 
	while(1)
	{
		printf("enter any data: ");
		gets(buf);
		if((write(fd, buf, 80)) == -1)
		{
			perror("write");
		}
		if((strcmp(buf, "exit")) == 0)
		return;
		if((read(fd, buf, 80)) == -1)
		{
			perror("read");
			return;
		}
		puts(buf);
		
		

	}

}
