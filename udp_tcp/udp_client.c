/*........................Udp protocol client...........................*/

#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<string.h>

main(int argc, char **argv)
{
	int ufd;
	struct sockaddr_in saddr;
	//socket() system call
	ufd = socket(AF_INET, SOCK_DGRAM, 0);
	if(ufd == -1)
	{
		perror("socket");
		return;
	}
	
	memset(&saddr, 0, sizeof(saddr));	

	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(6767);
//	saddr.sin_addr.s_addr = INADDR_ANY;
	inet_aton("127.0.0.1", &saddr.sin_addr.s_addr);	
//	inet_aton("192.168.66.52", &saddr.sin_addr.s_addr);//anupama pc_ip address
	int len; 
	char buf[50];
	len = sizeof(saddr);
	
	while(1)
	{
		printf("enter the message: ");
		gets(buf);
		//sendto() system call
		if(sendto( ufd, &buf, strlen(buf)+1, MSG_CONFIRM, (const struct sockaddr *)&saddr, sizeof(saddr)) == -1)
		{
			perror("sendto");
			return;
		}
	
		printf("reading the message:   ");
		//recvfrom() system call
		if(recvfrom(ufd, &buf, 50, MSG_WAITALL, (struct sockaddr *)&saddr, &len) == -1)
		{
			perror("recvfrom");
			return;	
		}
		puts(buf);

	}
}
