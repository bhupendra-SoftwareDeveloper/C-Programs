#include<stdio.h>
main()
{
	int i,j,n,l;
	printf("Enter rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)	printf(" ");
		for(l=1;l<=2*i-1;l++) printf("*");
	printf("\n");
	}
}
