#include<stdio.h>
main()
{
	int i,j,n,m=3;
	for(i=1;i<=7;i++)
	{   n=3;
		j=1;
		if(i<=4)
			for(;j<=i;j++)
			{
				printf("%d",n);
				n--;
			}
		else{
		 for(;j<=m;j++)
		{
			printf("%d",n);
			n--;
		}
		m--;}
		printf("\n");
	}
}
