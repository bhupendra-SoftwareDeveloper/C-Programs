#include<stdio.h>
main()
{
	int i,j,n;
	
	for(i=1;i<=5;i++)
	{
		n=1;
		for(j=1;j<=6;j++)
		{
			if(j%2==1)
				printf("%d ",i);
			else
			{
				printf("%d ",n);
				n++;
			}
		}
		printf("\n");
	}
}
