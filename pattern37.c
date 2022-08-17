#include<stdio.h>
main()
{
	int i,j,k,m=9,n=1;
	
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=5;j++)
		{
			if(j%2==1)
				printf("%3d",k);
			else
			{
				k+=m;
				printf("%3d",k);
				k+=n;
			}
		}
		printf("\n");
		m-=2;
		n+=2;
	}
}
