#include<stdio.h>
main()
{
	int i,j,n=1,k,s=9,l=1,p=9;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<n;j++)
		{
			printf(" ");
		}
		n++;
		
		for(k=l;k<=p;k++)
		{
			printf("*");
		}
		l++;
		p--;
		
		for(j=s;j<9;j++)
		{
			printf(" ");
		}
		s--;
		printf("\n");
	}
}
