#include<stdio.h>
main()
{
	long n,temp;
	int rem,c,r;
	printf("Enter the number:");
	scanf("%ld",&n);
	while(n!=0)
	{
		rem=n%100;
		if(rem<10&&n>9)
			printf("0");
		printf("%-4ld",rem);
		n/=100;
	}
}
