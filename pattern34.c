#include<stdio.h>
main()
{
	int i,j,k=1,n=3;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=n)
			{
				printf(" ");
			}
			else if(j==4)
			{
				printf("%d",k);
			}
			else
			{
				printf("%d",k);
				k++;
			}
		}
		printf("\n");
		n--;
		k++;
	}
}
