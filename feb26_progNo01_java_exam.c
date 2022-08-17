#include<stdio.h>
main()
{
	int a[3][3],n,r,c;
	
	printf("Enter elements for 3 Rows And for 3 Columns[3x3]:");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
			printf("%4d",a[r][c]);	
		}
		printf("\n");
	}
		printf("Sum of diagonal elements(TopLeft to BottomRight): %d",a[0][0]+a[1][1]+a[2][2]);
}
