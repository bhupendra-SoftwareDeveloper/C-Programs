#include<stdio.h>
#include<math.h>
main()
{
	int n,rem=0,rem2=0,temp,temp2,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	temp2=temp=n;
	while(n!=0)
	{
		rem++;
		n/=10;
	}
	while(temp!=0)
	{
		rem2=temp%10;
		sum+=pow(rem2,rem);
		temp/=10;
	}
	if(temp2==sum)
		printf("Armstrong");
	else
		printf("!Not Armstrong");
}
