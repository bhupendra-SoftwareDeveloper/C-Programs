#include<stdio.h>
main()
{
	int n,y,m,w,d;
	printf("Enter the Baby age in days:");
	scanf("%d",&n);
	
	y=n/365;
	m=n%365/30;
	w=n%365%30/7;
	d=n%365%30%7;
	printf("Baby is %d Years %d Months %d Weeks %d Days",y,m,w,d);
}
