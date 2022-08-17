//finding biggest number from 2 values

#include<stdio.h>
main()
{
	int x,y;
	
	printf("Enter the 1st value:");
	scanf("%d",&x);
	printf("Enter the 2nd value:");
	scanf("%d",&y);
	
	if(x==y)
	{
		printf("\n!!!Both values are same");
	}
	
	else if(x>y)
	{
		printf("\n%d is bigger than the %d",x,y);
	}
	else
	{
		printf("\n%d is bigger than the %d",y,x);
	}
}
