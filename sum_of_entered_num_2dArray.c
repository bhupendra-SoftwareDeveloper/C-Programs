#include<stdio.h>
main()
{
	int a[10][10],nr,nc,r,c,sum;
	printf("Enter ros & columns:");
	scanf("%d" "%d",&nr,&nc);
	printf("Enter %d numbers:",nr*nc);
	for(r=0;r<nr;r++)
	{	
		for(c=0;c<nc;c++)
		{
			scanf("%d",&a[r][c]);
			printf("%4d",a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<nr;r++)
	{	printf("\nRow %d's elements sum are: ",r+1);
		for(sum=0,c=0;c<nc;c++)
			printf("%d+",a[r][c],sum+=a[r][c]);
		printf("\b=%d",sum);
		printf("\n");
	}
}
