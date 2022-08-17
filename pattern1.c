#include<stdio.h>
main()
{
	int n,m,i,j;
	
	printf("Enter how many rows you to print *:");
	scanf("%d",&n);
	printf("Enter how many coloumns you to print *:");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
