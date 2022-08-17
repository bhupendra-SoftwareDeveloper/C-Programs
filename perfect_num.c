//perfect number[sum of number of factor=perfect number]
//like: 6=[factors 1,2,3][1+2+3=6]
//	   28=[factors 1,2,4,7,14][1+2+4+7+14=28]

#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
		if(n%i==0)
		{
			sum=sum+i;
		}
		if(sum==n)
			printf("\n%d IS PERFECT NUMBER",n);
		else
			printf("\n%d IS NOT PERFECT NUMBER",n);
}
