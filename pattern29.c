#include<stdio.h>
main()
{
	int i,j,k,l=0;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				k=i+l;
				printf("%d",k);
				l=k;
			}
			else
			{
				k--;
				printf("%2d",k);
			}
		}
		printf("\n");
	}
}
