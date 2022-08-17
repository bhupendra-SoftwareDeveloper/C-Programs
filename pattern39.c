#include<stdio.h>
main()
{
	int j;
	char i,l;
	
	for(i='A';i<='E';i++)
	{	l=i;
		for(j=1;j<=5;j++)
		{
			printf("%c ",i);
			i+=5;
		}
		i=l;
		printf("\n");
	}
}
