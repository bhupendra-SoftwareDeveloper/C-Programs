#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int n,c=0;
	x:
	printf("ENTER THE PIN:");
	scanf("%4d",&n);
	fflushall();
	if(n==5426)
		puts("WELCOME TO SBI");
	else
	{ 
		c++;
		if(c==3)
			puts("!!!Your card is blocked for 24 hours");
		else
		{	
			puts("!!!INVALID PIN");
			goto x;
		}
	}	
}
