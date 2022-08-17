#include<stdio.h>
main()
{
	int r,c,i,j,u=65,l;
	printf("Enter Row:");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(j<=r-i) printf("1");
			else 
			  printf("%d",i);
		}
		printf("\n");
	}
}
