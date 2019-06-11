#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<sys/types.h>

main(int argc, char **argv)
{
	int fd, sb, sl;
	struct sockaddr_in saddr;

	//socket() system call
	fd = socket(AF_INET, SOCK_STREAM, 0);
	if(fd == -1)
	{
		perror("socket");
		return;
	}

	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(7777);
	saddr.sin_addr.s_addr = htonl(INADDR_ANY);

	//bind() system call
	sb = bind(fd, (const struct sockaddr*)&saddr, sizeof(saddr));
	if(sb == -1)
	{
		perror("bind");
		return;
	}
	
	//listen() system call
	sl = listen(fd, 1);
	if(sl == -1)
	{
		perror("listen");
		return;
	}
	
	//accept() system call
	struct sockaddr_in caddr;
	int cfd, clen;
	clen = sizeof(caddr);
 
	printf("waiting for the acceptance: ");
	cfd = accept(fd, (const struct sockaddr*)&caddr, &clen);
	if(cfd == -1)	
	{
		perror("accept");
		return;
	}
	printf("connection established: ");
	
	char buf[80];
	while(1)
	{
		printf("waiting to read: ");
		bzero(buf, 80);
		if((read(cfd, buf, 80)) == -1)
		{
			perror("read\n");
			return;
		}

		if((strcmp(buf, "exit")) == 0)
		 return;
		puts(buf);
		printf("enter any string: ");
		gets(buf);
		if((write(cfd, buf, 80)) == -1)
		{
			perror("write\n");
			return;
		}
	}	
}	
