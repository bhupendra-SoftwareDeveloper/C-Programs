//biggest digit in number

#include<stdio.h>
main()
{
	int n,rem,temp,big;
	
	printf(" Enter the number : ");
	scanf("%d",&n);
	
	temp=n;
	big=0;
	
	while(n!=0)
	{
		rem=n%10;
			if(rem>big)
				big=rem;	
		n=n/10;
	}
	printf(" %d is biggest digit in the %d",big,temp);
}
