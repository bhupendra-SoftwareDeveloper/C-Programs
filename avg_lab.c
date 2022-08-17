#include<stdio.h>
main()
{
	int a,b,c,sum,avg;
	
	printf("Enter the 3 subject marks:");
	scanf("%d %d %d",&a,&b,&c);
	
	sum=a+b+c;
	printf("\nStudent Total Marks=%d",sum);
	avg=sum/3;
	printf("\nStudent Average=%d",avg);
	
	if(avg<40)
		printf("\n!!!STUDENT IS FAIL");
	else if(avg>=80)
		printf("\nFIRST DIV WITH DISTINCTION");
	else if(avg>=60)
		printf("\nFIRST DIV");
	
}
