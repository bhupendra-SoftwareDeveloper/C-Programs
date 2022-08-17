//find the sum of series 1*1 - 2*2 + 3*3 - 4*4 +.....n*n

#include<stdio.h>
#include<math.h>
main()
{
	int n,i,x,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	x=1;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,2)*x;
		x=-x;
	}
	printf("\nSum of series = %d",sum);
}
