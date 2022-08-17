#include<stdio.h>
main()
{
	int sub[6],sum=0,pass=1,i,date,month,year;
	char id[5],name[' '],fname[' '],mname[' '];
	float avg;
	printf("Enter Student ID & Name:");
	scanf("%s %s",id,name);
	x:
	printf("\nEnter Student DOB Date/Month/Year:");
	scanf("%d/%d/%d",&date,&month,&year);
	if(date>31||month>12||year>2017)
	{
		printf("!!!Wrong input of DOB enter again");
		goto x;
	}
	printf("Enter Student Father & Mother Name:");
	scanf("%s %s",fname,mname);
	printf("Enter 6 Subject Marks:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&sub[i]);
		sum+=sub[i];
		if(sub[i]<35)pass=0;
	}
	avg=sum/6.0;
	printf("-----------------------------------------------------------------------------------------------");
	printf("\n\t\tBOARD OF SECONDARY EDUCATION\n\t\t\tGUJARAT");
	printf("\n---------------------------------------------------------------------------------------------");
	printf("\nRoll No:%s\t\tName:%s\nFather:%s\t\tMother:%s\nDOB:%d/%d/%d",id,name,fname,mname,date,month,year);
	printf("\n---------------------------------------------------------------------------------------------");
	printf("\nSubject\t\tMarks\t\tPASS/FAIL");
	printf("\n---------------------------------------------------------------------------------------------");
	printf("\nENG\t\t%d\t\t%s",sub[0],sub[0]>=35?"P":"F");
	printf("\nS.S\t\t%d\t\t%s",sub[3],sub[1]>=35?"P":"F");
	printf("\nHIN\t\t%d\t\t%s",sub[1],sub[2]>=35?"P":"F");
	printf("\nGUJ\t\t%d\t\t%s",sub[4],sub[3]>=35?"P":"F");
	printf("\nSCI\t\t%d\t\t%s",sub[2],sub[4]>=35?"P":"F");
	printf("\nMATH\t\t%d\t\t%s",sub[5],sub[5]>=35?"P":"F");
	printf("\n---------------------------------------------------------------------------------------------");
	printf("\nTotal Marks=%d\tAverage=%.2f\tResult=%s",sum,avg,pass==1?"PASS":"FAIL");
	if(pass==1)
	{
		if(avg>75)printf("\tDIVISION=Distinction");
		else if(avg>60)printf("\tDIVISION=First");
		else if(avg>50)printf("\tDIVISION=Second");
		else if(avg>35)printf("\tDIVISION=Third");
	}
	printf("\n---------------------------------------------------------------------------------------------");
	
}
