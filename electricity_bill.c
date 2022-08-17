#include<stdio.h>
main()
{
	int n,l,prev,cur;
	long sn;
	char name[' '];
	float charge,ac;
	printf("Enter The Service Number:");
	scanf("%ld",&sn);
	printf("Enter The Consumer Name:");
	scanf("%s",name);
	printf("Enter The Previous Month Reading:");
	scanf("%d",&prev);
	x:
	printf("Enter The Current Month Reading:");
	scanf("%d",&cur);
	if(cur<prev)
	{
		puts("\a!!KINDLY CHECK THE ENTERED CURRENT MONTH READING.");
		goto x;
	}
	n=cur-prev;
	if(n<=50)
		charge=n*.5;	
	else if(n>50 && n<=150)
		charge=(n-50)*.75+25;
	if(n>150 && n<=250)
		charge=(n-150)*1.2+75+25;
	if(n>250)
		charge=(n-250)*1.5+120+75+25;
		
	printf("Your Electricity bill =%.2f",charge);
	ac=charge*20/100;
	if(charge<25)
	{
		charge=25;
		ac=0;
	}
	printf("\nAdditional Charge =%.2f",ac);
	printf("\nYour Total Payable Electricity bill =%.2f",charge+ac);
}
