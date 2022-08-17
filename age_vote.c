//check the entered age is eligible for vote or not

#include<stdio.h>
main()
{
	int age;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("==Eligible for vote==");
	}
	else
	{
		printf("==Not Eligible for vote==");
	}
}
