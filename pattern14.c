#include<stdio.h>
main()
{
	int i,j,k,n;
	
	n=7;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)	//for 1,2,3
		{
			printf("%d",j);
		}
		for(k=4;k<n;k++)	//for 3,2,1
		{
			printf("%d",n-k);
			
		}
		printf("\n");
	}
}
