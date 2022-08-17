#include<stdio.h>
main()
{
	int a[2][2][2][2]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},s,b,r,c;
	for(s=0;s<2;s++)
	{	printf("Set:- %d\n",s);
		for(b=0;b<2;b++)
		{	printf("Block:- %d\n",b);
			for(r=0;r<2;r++)
			{
				for(c=0;c<2;c++)
					printf("%4d",a[s][b][r][c]);
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
}
