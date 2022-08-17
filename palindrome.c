#include<stdio.h>
main()
{
	int n,temp,rem,rev=0;
	
	printf("Enter the digit : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;		//to get reminder value
		rev=(rev*10)+rem;
		n=n/10;			//to get quoteint value
	}
	
	if(rev==temp)
		printf("\nPALINDROME NUMBER");
	else
		printf("\n!!!NOT PALINDROME NUMBER");
}
