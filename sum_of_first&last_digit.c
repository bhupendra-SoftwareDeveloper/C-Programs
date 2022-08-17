//sum of first & last digit of given number

#include<stdio.h>
main()
{
	int n,fd,sum=0;
	
	printf("Enter the Nmber:");
	scanf("%d",&n);
	
	fd=n%10;
	while(n>10)
	{
		n=n/10;
	}
	sum=n+fd;
	printf("First digit(%d) + Last digit(%d) = %d",n,fd,sum);
}
