//snack pattern

#include<stdio.h>
main()
{
	int i,j,k=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==1)
				printf("%4d",k++);
			else
				printf("%4d",--k);
		}
		printf("\n");
		k=k+5;
	}
}
