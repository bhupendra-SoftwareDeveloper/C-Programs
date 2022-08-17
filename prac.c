#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu
{
	int id;
	char name[20];
}s;

void newrecord()
{
	
}
void deletes()
{
	
}
void line()
{
	puts("----------------------------------------------------------------");
}
void main()
{
	char c;
	line();
	printf("\n\t\t\tStudent Enrollment System\n");
	line();
	puts("\t\t\t1.New Record\n\t\t\t2.Enquiry\n\t\t\t3.Report\n\t\t\t4.Update\n\t\t\t5.Delete\n\t\t\t6.Exit");
	line();
	printf("\t\t\tEnter your option[ ]\b\b");
	scanf(" %c",&c);
	switch(c)
	{
		case 1: 
			newrecord();
			break;
		case 6:
			exit(0);
			break;
	}
	line();
	main();
}
