//biggest value from different entered numbers by ternary operator

#include<stdio.h>
main()
{
	int x,y,z,big;
	
	printf("Enter the First value:");
	scanf("%d",&x);
	printf("\nEnter the Second value:");
	scanf("%d",&y);
	printf("\nEnter the Third value:");
	scanf("%d",&z);
	
	big=x>y?(x>z? x:z):(y>z? y:z);
	
	printf("\n%d is the biggest value",big);
}
