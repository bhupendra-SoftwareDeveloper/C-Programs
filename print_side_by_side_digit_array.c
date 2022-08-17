#include<stdio.h>
main()
{
	int a[10][10],t[10][10],nr,nc,r,c,sum;
	printf("Enter rows & columns upto[10][10]:");
	scanf("%d" "%d",&nr,&nc);
	printf("Enter %d numbers:",nr*nc);
	for(r=0;r<nr;r++)
	{	
		for(sum=0,c=0;c<nc;c++)
		{
			scanf("%d",&a[r][c]);
			printf("%5d",a[r][c]);
		}
		printf("\n");
	}
	printf("====================================\n");
	for(r=0;r<nr;r++)
	{	
		for(sum=0,c=0;c<nc;c++)
		{
			t[r][c]=a[r][c];
			while(t[r][c]!=0)
			{
				if((t[r][c]%100)%11==0)
				{
					printf("%c%d",255,a[r][c]);
					break;
				}
				else printf("%c",255);
				t[r][c]/=10;
			}
		}
		printf("\n");
	}
}
