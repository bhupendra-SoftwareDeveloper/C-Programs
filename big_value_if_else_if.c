//nested if else if and find biggest value

#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("Enter the First value:");
	scanf("%d",&x);
	printf("\nEnter the Second value:");
	scanf("%d",&y);
	printf("\nEnter the Third value:");
	scanf("%d",&z);
	
	if(x>y)
	{
		if(x>z)
			printf("\n%d is biggest value",x);
		else
			printf("\n%d is biggest value",z);
	}
	else
	{
		if(y>z)
			printf("\n%d is biggest value",y);
		else
			printf("\n%d is biggest value",z);	
	}	
}
