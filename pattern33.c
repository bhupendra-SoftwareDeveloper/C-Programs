#include<stdio.h>
main()
{
	int i,j,k,m=11,n=-1;
	
	for(i=1;i<=5;i++)
	{
		k=i;
		m=m-2;
		n=n+2;
		for(j=1;j<=5;j++)
		{
			if(j%2==1)
			{
				printf("%3d",k);
				k=k+m;
			}
			else
			{
				printf("%3d",k);
				k=k+n;
			}
		}
		printf("\n");
	}
}
