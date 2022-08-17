//sum of first n numbers[like: 6= 1+2+3+4+5+6 =21,4=1+2+3+4 =10]

#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		sum=sum+i;
		
	printf("Sum of %d number is = %d",n,sum);
}
