//strong number[sum of factorial of digit of number]
//like: 145= 1!+4!+5! = 45

#include<stdio.h>
main()
{
	int n,rem,temp,i,f,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;
		f=1;
			for(i=1;i<=rem;i++)
			{
				f=f*i;
			}
		sum=sum+f;
		n=n/10;
	}
	if(sum==temp)
		printf("%d is Strong Number",temp);
	else
		printf("%d is Not Strong Number",temp);
}
