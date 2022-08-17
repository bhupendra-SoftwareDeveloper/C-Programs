#include<stdio.h>
main()
{
	int j,n=5;

	while(n!=0)
	{	
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		n--;
	}
}
