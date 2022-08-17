#include<stdio.h>
main()
{
	int n,i,j,count;
	
	printf("Enter the range:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==1)
			printf("%d ",i);
	}
}
