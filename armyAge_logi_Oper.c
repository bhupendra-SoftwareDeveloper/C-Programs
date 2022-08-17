//check the entered age is eligible for army exam or not[age 18-25]

#include<stdio.h>
main()
{
	int age;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18 && age<=25)
	
		printf("==Eligible for exam==");
	
	if(age<18 || age>25)
		printf("==Not Eligible for exam==");
		
}
