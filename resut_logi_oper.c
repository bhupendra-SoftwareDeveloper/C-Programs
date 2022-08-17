/*finding result of student using logical && and || operator
	[all sub shoud be min=40 marks]*/
	
#include<stdio.h>
main()
{
	int m,e,h;
	
	printf("Enter the marks of Math:");
	scanf("%d",&m);
	printf("Enter the marks of English:");
	scanf("%d",&e);
	printf("Enter the marks of Hindi:");
	scanf("%d",&h);
	
	if(m>=40 && e>=40 && h>=40)
		printf("====Student is PASS====");
		
	if(m<40 || e<40 || h<40)
		printf("!!!Student is FAIL!!!");
}
