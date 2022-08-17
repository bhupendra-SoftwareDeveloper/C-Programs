#include<stdio.h>
main()
{
	int i,j,n1=-1,n2=1,n3=0;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			n3=n2+n1;
			printf("%4d",n3);	
			n1=n2;
			n2=n3;
		}
		printf("\n");
	}
}
