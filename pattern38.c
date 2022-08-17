#include<stdio.h>
main()
{
	long n,temp,rev=0,rem; 
	printf("Enter the number:");
	scanf("%ld",&n);
	temp=n;
	if(n<0)
		printf("-",n=-n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	rem=0;
	while(rev!=0)
	{
		rem=rev%10;
		switch(rem)
		{
			case 0:
					printf(" Zero");
					break;
			case 1:
					printf(" One");
					break;
			case 2:
					printf(" Two");
					break;
			case 3:
					printf(" Three");
					break;
			case 4:
					printf(" Four");
					break;
			case 5:
					printf(" Five");
					break;
			case 6:
					printf(" Six");
					break;
			case 7:
					printf(" Seven");
					break;
			case 8:
					printf(" Eight");
					break;
			case 9:
					printf(" Nine");
		}
		rev/=10;
	}
	n=temp;
	while(n!=0)
	{
		while(temp%10==0&&temp!=0)
			printf(" Zero",temp/=10);
		n/=10;
	}
}
