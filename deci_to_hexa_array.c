#include<stdio.h>
main()
{
	int n,a[' '],i,j;
	printf("Enter Decimal number to convert in HexaDecimal:");
	scanf("%d",&n);
	printf("HexaDecimal numbers of %d is = ",n);
	for(i=0;n!=0;i++,n/=16)
		a[i]=n%16;
	for(j=i-1;j>=0;j--)
		a[j]<10?printf("%d",a[j]):printf("%c",55+a[j]);
}
