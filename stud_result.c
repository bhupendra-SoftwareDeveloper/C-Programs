#include<stdio.h>
#include<string.h>
main()
{
	int hin,eng,guj,ss,sci,math,total;
	float avg;
	char name[' '],id[' '],result[' '];
	
	printf("Enter the ID:");
	scanf("%s",id);
	printf("Enter the Name:");
	scanf("%s",name);
	printf("Enter the 6 subject:");
	scanf("%d%d%d%d%d%d",&hin,&eng,&guj,&ss,&sci,&math);
	total=hin+eng+guj+ss+sci+math;
	avg=total/6.0; //6.0 beacuse int/float value will return in float
	if(hin>=35&&eng>=35&&guj>=35&&ss>=35&&sci>=35&&math>=35)
	{
		if(avg>80)
		strcpy(result,"1st Class with Distinction");
	else if(avg>=60)
		strcpy(result,"1st Class");
	else if(avg>=50)
		strcpy(result,"2nd Class");
	else if(avg>=35)
		strcpy(result,"3rd Class");
	}
	else
		strcpy(result,"!!!FAIL!!!");
	puts("Student ID\tStudent Name\tTotal Marks\tAverage\t\tResult");
	puts("-----------------------------------------------------------------------------------------------");
	printf("%s\t\t %s\t\t%d\t\t%f\t%s",id,name,total,avg,result);
}
