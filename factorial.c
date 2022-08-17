//getting factorial number by user input 2way

#include<stdio.h>
main()
{
	int n,i,f=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) //1*1,1*2,2*3.....n
//2nd way for(i=n;i>=1;i--) //n*n-1.....1
		f=f*i;		
	printf("%d!=%d",n,f);
}
