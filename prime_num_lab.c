#include<stdio.h>
main()
{
	int n,i,count;
	
	printf("Enter the num:");
	scanf("%d",&n);
	
	count=0;
	i=1;
	while(i<=n)
	//for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
		i++;
	}
	if(count==2)
		printf("%d is prime number",n);
	else
		printf("%d is NOT prime number",n);
}
