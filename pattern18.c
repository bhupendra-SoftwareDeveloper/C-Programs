#include<stdio.h>
main()
{
	int n,i,j,r,k;
	printf("Enter rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	r=n-1;
		k=i;
		for(j=1;j<=i;j++)
		{
			if(j==1) printf("%d",i);
			else
			{
				k+=r;
				printf("%3d",k);
				r--;		
			}		
		}
		printf("\n");
	}
}
