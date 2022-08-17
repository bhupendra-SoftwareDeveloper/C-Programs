#include<stdio.h>
main()
{
	int m,n,f,t;
	
	printf("VEHICAL RUNNING PERIOD IN MONTHS:");
	scanf("%d",&m);
	
	if(m<=3)
		printf("GOOD CONDITION OF VEHICAL");
	else
	{
		printf("1.VEHICAL IS STARTED\n2.FUEL NEEDED\n3.NEED SERVICE\n4.TIRE PROBLEM\n");
		printf("ENTER THE CHOICE:");	
		scanf("%d",&n);	
		switch(n)
		{
			case 1:
			printf("Status:VEHICAL IS STARTED");
			break;
			case 2:
			printf("\nStatus:YOUR VEHICAL NEED FUEL\nFUEL COST=100/l INR");
			printf("\nHOW MUCH LETER FUEL YOU WANT TO FILL IN YOUR VEHICAL:");
			scanf("%d",&f);
			printf("TOTAL COST=%d INR",f*100);
			break;
			case 3:
			printf("\nStatus:YOUR VEHICAL NEED SERVICE\nCOST=10000 INR");
			break;
			case 4:
			printf("\nStatus:YOUR VEHICAL NEED TO CHANGE THE TIRE\n1.LOCAL COMPANY=3000 INR\n2.BRANDED COMPANY=5500 INR\n");
			printf("\nWHICH TYPE OF TYRE YOU WANT:");
			scanf("%d",&t);
			if(t==1)
				printf("TOTAL COST=%d INR",t*3000*4);
			else if(t==2)
				printf("TOTAL COST=%d INR",t*5500*4);
			else
				printf("!!!INVALID SELECTION");
			break;
			default:
			printf("!!!INVALID SELECTION");
		}
	}
}
