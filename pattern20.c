#include<stdio.h>
main()
{
	int i,j,l=1,p=2;
	
	for(i=1;i<=3;i++)
	{
		
		for(j=1;j<=l;j++)
		{
			printf("*");
		}
		l++;
		printf("\n");
	}
		for(i=4;i<=5;i++)	//for decrease
	{
		
		for(j=1;j<=p;j++)
		{
			printf("*");
		}
		p--;
		printf("\n");
	}
}
