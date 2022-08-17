#include<stdio.h>
main()
{
	int n,a[' '],i,j;
	printf("Enter Decimal number to convert in Octal:");
	scanf("%d",&n);
	printf("Octal numbers of %d is = ",n);
	for(i=0;n!=0;i++,n/=8)
		a[i]=n%8;
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
