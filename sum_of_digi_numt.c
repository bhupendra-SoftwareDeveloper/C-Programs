//sum of entered digit number

#include<stdio.h>
main()
{
	int n,rem,sum=0;
	
	printf("Enter the digit : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;	//to get reminder value
		sum=sum+rem;
		n=n/10;		//to get quoteint value
	}
	printf("Sum of entered digit : %d",sum);
}
