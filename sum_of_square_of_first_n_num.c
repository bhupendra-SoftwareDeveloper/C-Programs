//sum of square of first n numbers[like: 4= 1*1+2*2+3*3+4*4 =30]

#include<math.h>
#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		sum=sum+pow(i,2);
		
	printf("Sum of Square of %d number is = %d",n,sum);
}
