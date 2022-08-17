#include<stdio.h>
main()
{
	int i,j;
	
	char n=65;	//65 is ASCII value of 'A'
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %c",n);
			n++;
		}
		printf("\n");
	}
}
