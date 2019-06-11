/*......................udp server...................*/

#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<string.h>

main(int argc, char **argv)
{
	int sfd, cb;
	struct sockaddr_in saddr, caddr;
	//socket() system call
	sfd = socket(AF_INET, SOCK_DGRAM, 0);
	if(sfd == -1)
	{
		perror("socket");
		return;
	}
	
	memset(&saddr, 0, sizeof(saddr));
	memset(&caddr, 0, sizeof(caddr));

	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(6767);
	saddr.sin_addr.s_addr = INADDR_ANY;
	//bind() system call
	cb = bind(sfd, (const struct sockaddr *)&saddr, sizeof(saddr));
	if(cb == -1)
	{
		perror("bind");
		return;
	}
	
	char buf[50];
	int len;
	len = sizeof(saddr);
	while(1)
	{
		printf("reading the messages:  ");
		if(recvfrom(sfd, &buf, 50, 0 , (struct sockaddr*)&caddr, &len) == -1)
		{
			perror("recvfrom");
			return;
		}
		puts(buf);
	
		printf("enter the message: ");
		gets(buf);
		if(sendto(sfd, &buf, strlen(buf)+1, 0, (const struct sockaddr *) &caddr, sizeof(saddr)) == -1)
		if(sfd == -1)
		{
			perror("sendto");
			return;
		}
	}
}
