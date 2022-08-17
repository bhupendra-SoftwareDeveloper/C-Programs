// there is two way if use commented one then comment n=i+1,n++ and remove n variable

#include<stdio.h>
main()
{
	int i,j,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
			//printf("%d",(i+j)-1);
		}
		printf("\n");
		n=i+1;
	}
}
