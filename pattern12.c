#include<stdio.h>
main()
{
	int n,i,j,r=0;
	printf("Enter rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	if(i%2==0)
		{
			--r;
			r+=i;
		}
		else r+=i;
		for(j=1;j<=i;j++)
		{
			if(i%2==1)printf("%3d",r++);
			else printf("%3d",r--);
		}
		printf("\n");
	}
}
