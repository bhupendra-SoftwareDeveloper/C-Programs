#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[10][10],nr,nc,r,c,sum=0;
	x:
	printf("Enter row and column upto 10x10:");
	scanf("%d%d",&nr,&nc);
	if(nr!=nc)
	{
		printf("!!!Enter Only Square Matrix...Let's try again\n");
		goto x;
	}
	printf("Enter %d Numbers:",nr*nc);
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			scanf("%d",&a[r][c]);
			printf("%5d",a[r][c]);
			if(r==c) sum+=a[r][c];
		}
		printf("\n");	
	}
	printf("\nTrace(Diagonal sum(top left)): %d",sum);
}
