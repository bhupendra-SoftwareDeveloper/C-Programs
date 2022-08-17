#include<stdio.h>
main()
{
	int i,j,m=4,n=4;
	char k;
	
	for(i=1;i<=4;i++)
	{
		k=65;
		for(j=1;j<=7;j++)
		{
			if(i>1 && j>m && j<n)
				printf(" ");
			else
				printf("%c",k);
			j<4?k++:k--;
		}
		printf("\n");
		m--;
		n++;
	}
}
