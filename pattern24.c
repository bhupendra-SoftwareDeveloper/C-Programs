#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)	printf(" ");
			else printf("* ");
		}
		printf("\n");
	}
}
