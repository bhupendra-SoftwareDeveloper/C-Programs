#include<stdio.h>
main()
{
	int r,i,j,k=65;
	printf("Enter Row:");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i||i==r)
				printf("*");
			else 
			{
				if(k>'Z')k=65;
				printf("%c",k++);
			}
		}
		printf("\n");
	}
}
