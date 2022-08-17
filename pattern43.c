#include<stdio.h>
main()
{
	int i,j,k,m=4,n=4;
	
	for(i=1;i<=4;i++)
	{
		k=1;
		for(j=1;j<=7;j++)
		{
			if(j<m||j>n)
				printf(" ");
			else
			{
				printf("%d",k);
				j<4?k++:k--;	//ternary operator
				/*	if(j<4)
						k++;
					else
						k--;*/
			}
		}
		printf("\n");
		m--;
		n++;
	}
}
