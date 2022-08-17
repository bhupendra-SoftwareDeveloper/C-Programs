#include<stdio.h>
main()
{
	int i,n,rem,r;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
	rem=n%10;
	r=rem;
	printf("%d",r);
	n/=10;
	}
}
