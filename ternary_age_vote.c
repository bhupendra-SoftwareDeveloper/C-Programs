//check the entered age is eligible for vote or not using ternary operator

#include<stdio.h>
main()
{
	int age;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	age>=18? printf("Eligible"): printf("Not Eligible");
}
