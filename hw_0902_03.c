#include<stdio.h>
main()
{
	int n,j=1,i,sum=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while(j<=n)
	{
		i=j;
		if(i==1)
			printf("1");
		else if(i%2==0)
			{
			  sum-=i;
			  printf("%d",i=-i);
			}
		else
			{
				sum+=i;
				printf("+%d",i);
			}
		j++;
	}
	printf("=%d",sum);
}
