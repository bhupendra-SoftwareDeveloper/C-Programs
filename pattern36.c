#include<stdio.h>
main()
{
	int i,j,k=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=1;j--)
		{
			if(j<=i)
			
				printf("%d",k++);
			else
				printf(" ");
		}
		printf("\n");
	}
}
