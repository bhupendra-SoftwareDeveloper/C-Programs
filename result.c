//finding result of student out of 100 & 40 is pass 

#include<stdio.h>
main()
{
	int m;
	
	printf("Enter the marks:");
	scanf("%d",&m);
	
	if(m<0||m>100)
	{
		printf("!!!Check your entered marks");
	}
	
	else if(m>=40)
	{
		printf("=====PASS=====");
	}
	else
	{
		printf("=====FAIL=====");
	}
}
