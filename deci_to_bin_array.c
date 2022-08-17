#include<stdio.h>
main()
{
	int n,c=0,a[15]={0},i,j;
	printf("Enter Decimal number to convert in Binary:");
	scanf("%d",&n);
	printf("Binary of %d is = ",n);
	for(i=0;n!=0;i++,n/=2)
		a[i]=n%2;
	for(j=15;j>=0;j--)
	{ 	printf("%d",a[j],c++);
		if(c==4)printf(" ",c=0);
	}
}
