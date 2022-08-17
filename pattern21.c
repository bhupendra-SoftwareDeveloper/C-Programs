#include<stdio.h>
main()
{
	int i,j,a,s=1,l=3,b=2,p=2;
	
	for(i=1;i<=3;i++)
	{
		for(a=1;a<=b;a++)
		{
			printf(" ");
		}
		b--;
		
		for(j=l;j<=3;j++)
		{
			printf("*");
		}
		l--;
		printf("\n");
		
	}
		for(i=4;i<=5;i++)	//for decrease
	{
		for(a=1;a<=s;a++)
		{
			printf(" ");
		}
		s++;
		
		for(j=p;j<=3;j++)
		{
			printf("*");
		}
		p++;
		printf("\n");
	}
}
