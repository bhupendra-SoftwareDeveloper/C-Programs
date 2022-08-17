#include<stdio.h>
main()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);	//also use j for diif result
		}
		printf("\n");
	}
}
