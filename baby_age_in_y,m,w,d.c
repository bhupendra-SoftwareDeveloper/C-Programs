#include<stdio.h>
main()
{
	int n,y,m,w,d;
	printf("Enter the Baby age in year,month,week,day:");
	scanf("%d%d%d%d",&y,&m,&w,&d);
	
	n=y*365+m*30+w*7+d;
	printf("Baby is %d Days",n);
}
