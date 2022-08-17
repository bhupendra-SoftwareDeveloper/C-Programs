#include<stdio.h>
main()
{
	int n,i,rem,rev,temp;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	temp=n;
	rev=0;
	//while(n!=0)
	for(i=0;i<=n;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	
	printf("After Reverse: %d",rev);
}
