//prime number or not[prime num=that not dividable instead of 1 & that number]
//like: 2,3,5,7,11,13,17,19......

#include<stdio.h>
main()
{
	int n,i,count=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		if(n%i==0)
		{
			count++;
			printf("%d ",i);		
		}
		if(count==2)
			printf("\n%d IS PRIME NUMBER",n);
		else
			printf("\n%d IS NOT PRIME NUMBER",n);
}
