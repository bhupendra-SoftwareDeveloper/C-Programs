//result of student for 3 sub
//max marks:100,min marks=40 each sub then pass otherwise fail
//if pass than print average and divisions
//first:60 or more than, second:50 to 59 ,third:40 to 49

#include<stdio.h>
main()
{
	int m,p,c,avg;
	
	printf("Enter the Maths number:");
	scanf("%d",&m);
	printf("Enter the Physics number:");
	scanf("%d",&p);
	printf("Enter the Chemestry number:");
	scanf("%d",&c);
	
	avg=(m+p+c)/3;
	
	
	if(m<40 || p<40 || c<40)
	{
		printf("\nStudent is !!!FAIL!!!");
	}
	
	else if(avg>=60)
		{
			printf("\nAverage:%d\n",avg);
			printf("===FIRST DIVISION===");
		}
	else if(avg>=50)//here we are not writing second condition because till 60 it will cover in 1st condition & now in this condition it will cover 50 or more means 50 to 59
		{
			printf("\nAverage:%d\n",avg);
			printf("===SECOND DIVISION===");
		}
	else
		{
			printf("\nAverage:%d\n",avg);
			printf("===THIRD DIVISION===");
		}
}
