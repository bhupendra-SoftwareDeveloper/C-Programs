#include<stdio.h>
main()
{
	int id;
	char name[' '];
	float bs,da,hra,gross,it,net,monthly;
	printf("Enter the Emp Id,Emp Name,Emp Basic Salary:");
	scanf("%d%s%f",&id,&name,&bs);
	
	da=bs*64.89/100;
	hra=bs*18.5/100;
	gross=(bs+da+hra)*12;	//Annual
	it=gross*5/100;			//Income tax deduct in annualy
	net=gross-it;
	monthly=net/12;
	printf("Emp Id:%d\nEmp Name:%s\nBasic Salary:%.2f\nDA:%.2f\nHRA:%.2f\nGROSS SALARY:%.2f\nINCOME TAX:%.2f\nNET SALARY:%.2f\nMonthly Net Salary:%.2f",id,name,bs,da,hra,gross,it,net,monthly);
}
