#include<stdio.h>
main()
{
	int n,temp,rev,rem;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp)
		printf("\nNUMBER IS PALINDROME..");
	else
		printf("\n!!!NUMBER IS NOT PALINDROME..");
}
