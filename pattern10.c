#include<stdio.h>
main()
{
	int i,j,k,l=2;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			k=l%2;
			printf("%d",k);
			l++;
		}
		printf("\n");
	}
}
