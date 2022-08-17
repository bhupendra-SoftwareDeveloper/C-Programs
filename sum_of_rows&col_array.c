#include<stdio.h>
main()
{
	int a[10][10],nr,nc,r,c,sum;
	x:
	printf("Enter rows & columns upto[10][10]:");
	scanf("%d" "%d",&nr,&nc);
	if(nr>10||nc>10)
	{
		printf("!!!Be in your limit\nAgain enter rows & columns upto[10][10]:");
		goto x;
	}
	printf("Enter %d numbers:",nr*nc);
	for(r=0;r<nr;r++)
	{	
		for(sum=0,c=0;c<nc;c++)
		{
			scanf("%d",&a[r][c]);
			sum+=a[r][c];
			printf("%4d",a[r][c]);
		}
			printf("---------->%d",sum);
		printf("\n");
	}
	printf("------------------------------------\n");
	for(c=0;c<nc;c++)
	{
		for(sum=0,r=0;r<nr;r++)
			sum+=a[r][c];
		printf("%4d",sum);
	}
}
