//using if else if 

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n>0)
		printf("\nPOSITIVE NUMBER");	//not using {} because there are only one statement
	else if(n<0)
		printf("\nNEGATIVE NUMBER");
	else if(n==0)
		printf("\nNUMBER IS ZERO");	//else part is optionally
}
