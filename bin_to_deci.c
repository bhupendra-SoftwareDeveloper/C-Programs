#include<stdio.h>
#include<math.h>
main()
{
	unsigned long long int  n,rem,x=0,y,z=0,d,rem2,count=0;
	
	printf("Enter the Binary code[max=20]:");
	scanf("%llu",&n);
	y=n;
	d=y;
	while(d!=0)
	{
		rem2=d%10;
		if(rem2<0||rem2>1)
		{
			count++;
			break;
		}			
		d/=10;
	}
	if(count==0)
	{
		while(n!=0)
		{
			rem=n%10;
			if(z==0||rem==0)
				x+=rem;
			else
				x=pow(2,z)*rem+x;
			z++;
			n/=10;
		}
		printf("\nBinary=%llu To Decimal=%llu",y,x);
	}
	else
		printf("!!!Enter the right binary code!!!");
}
