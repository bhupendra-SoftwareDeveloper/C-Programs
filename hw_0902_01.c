#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d+",i);
		sum+=i;
		i++;
	}
	printf("\b=%d",sum);
}
