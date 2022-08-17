#include<stdio.h>
main()
{
	int i,j,m=5,n=5;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i>1 && j>m && j<n)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
		m--;
		n++;
	}
}
