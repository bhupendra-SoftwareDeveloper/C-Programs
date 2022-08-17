#include<stdio.h>
main()
{
	int i,j,n,m,k;
	
	n=1;
	m=5;
	for(i=1;i<=5;i++)		//for row
	{
		for(k=m;k<5;k++)	//for space
		{
			printf(" ");
		}m--;
		
		for(j=n;j<=5;j++)	//for colomn
		{
			printf("*");
		}
		n++;
		printf("\n");
	}
}
