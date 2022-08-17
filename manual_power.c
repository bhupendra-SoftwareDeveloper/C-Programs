#include<stdio.h>
main()
{
	int n,p,r,i;
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\nEnter the number of power:");
	scanf("%d",&p);
	
	r=1;
	for(i=1;i<=p;i++)
		r=r*n;
	
	printf("\n%d power %d is = %d",n,p,r);
}
