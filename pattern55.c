/*
A
BA
CBA
DCBA
EDCBA
DCBA
CBA
BA
A    
*/

#include<stdio.h>

main()
	{
		int a=65;
		int i=1,j=1,m=1;
		for(i=1;i<=9;i++)
		{
			
			if(i<6)
			{
				a+=i;
				for(j=1;j<=i;j++)
			{
				printf("%c",(--a));
			}
			printf("\n");
			a=65;
			}
			else
				{
					a=a+(10-i);
					for(m=10-i;m>=1;m--)
					{
						printf("%c",(--a));
					}
					printf("\n");
					a=65;
				}
		}
	}
