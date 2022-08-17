//count the odd digit of number

#include<stdio.h>
main()
{
	int n,rem,count;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	count=0;
	while(n!=0)
	{
		rem=n%10;
		if(rem%2!=0)
		{
			count++;
		}
		n=n/10;
	}
	printf("Number of ODD digit in value = %d",count);
}
