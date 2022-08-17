#include<stdio.h>
main()
{
	int n,i,j,r;
	printf("Enter rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
			printf("%3d",j);
		printf("\n");
	}
}
