#include<stdio.h>
main()
{
	long n,temp;
	int sum,r;
	printf("Enter the number:");
	scanf("%ld",&n);
	temp=n;
	while(n>9)
	{ sum=0;
		while(n!=0)
	  {
		sum+=n%10;
		n/=10;
	  }  
	  n=sum;
	}
	printf("%d is generic root number of %ld",sum,temp);
	if(sum==1)
		printf("\n%ld is Magic Number",temp);
}
