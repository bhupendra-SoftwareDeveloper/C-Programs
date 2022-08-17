//power 

#include<stdio.h>
main()
{
	int n,i,r=1,p;
	
	printf("Enter number of digit:");
	scanf("%d",&n);
	printf("\nEnter number of power:");
	scanf("%d",&p);
	
	for(i=1;i<=p;i++)
		r=r*n;
	
	printf("\n%d power of %d = %d",n,p,r);
	
}
