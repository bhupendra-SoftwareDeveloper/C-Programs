#include<stdio.h>
main()
{
	int n,rem,rev;
	
	printf("Enter the digit : ");
	scanf("%d",&n);
	
	printf("\nBefore reverse: %d",n);
	
	while(n!=0)
	{
		rem=n%10;		//to get reminder value
		rev=(rev*10)+rem;
		n=n/10;			//to get quoteint value
	}
	printf("\nAfter reverse : %d",rev);
}
