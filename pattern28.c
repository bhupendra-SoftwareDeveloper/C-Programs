#include<stdio.h>
main()
{
	int i,j,k=4;
	
	for(i=1;i<=5;i++)
	{
		i<=3?k--:k++;
		for(j=1;j<=3;j++)
		{
			if(j>=k)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
