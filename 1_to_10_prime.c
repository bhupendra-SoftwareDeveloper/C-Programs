#include<stdio.h>
main()
{
	int i,n,count=0,h,m=1;
	
	n=10;
	for(i=1;i<=n;i++)
	{
		for(h=1;h<=m;h++)
		{
			if(i%h==0)
			count++;
			if(count==2)
			{
				printf("%d",m);
				printf("\t");
			}
			
		}m++;
	}
	
}
