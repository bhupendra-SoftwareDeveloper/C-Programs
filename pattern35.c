#include<stdio.h>
main()
{
	int i,j,n=3,k=1,l=0;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=n)
			{
				printf(" ");
			}
			
			if(j==4)
			{
				k=k+l;
				printf("%2d",k);
			}
			else
			{
				printf("%2d",k);
				k++;
			}
			n--;		
		}
		printf("\n");
		k++;
		l++;
		
	}
}
