//floyd's triangle
#include<stdio.h>
main()
{
	int n,i,j,r;
	printf("Enter rows:");
	scanf("%d",&n);
	r=n*(n+1)/2;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%3d",r--);
		printf("\n");
	}
	
}
