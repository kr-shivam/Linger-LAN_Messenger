#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int c,d;
	char ip[20];
	printf("    --------------------------------\n");
	printf("    --------------------------------\n");
	printf("     ||   LINGER LAN MESSENGER   ||\n");
	printf("    --------------------------------\n");
	printf("    --------------------------------\n\n");
	
	printf("\t1 - Unicast Chat Application\n\t2 - Broadcast Chat Application\n\n\tPlease enter your choice here : ");
	
	

	scanf("%d",&c);
	switch(c)
	{
		case 1:
		{
			printf("\n\n    Welcome to Unicast (One to One) Messaging Service\n");
			printf("\n     1 - To host a server\n     2 - To be a client\n\n    Please enter your choice here : ");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
				{
					system("./server");
					break;
				}
				case 2:
				{
					char cl[50]="./client ";
		                       	printf("\n\tEnter the IP Address of the client : ");
                		        scanf("%s",&ip);
               			        strcat(cl,ip);
                        		system(cl);
                        		break;
				}
			}
		}


		case 2:
		{
			printf("\n\n    Welcome to Broadcast (One to Many) Messaging Service\n");
			printf("\n     1 - To host a BROADCAST SERVER HANDLER\n     2 - To be a client\n\n    Please enter your choice here : ");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
				{
					system("./serverbroadcast");
					break;
				}
				case 2:
				{
					char cl[50]="./clientbroadcast ";
		                       	printf("\n\tEnter the IP Address of the client : ");
                		        scanf("%s",&ip);
               			        strcat(cl,ip);
                        		system(cl);
                        		break;
				}
			}
		}
	}
	return 0;
}
