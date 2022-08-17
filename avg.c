//Find the avg of three numbers from keyborad using float keyword

#include<stdio.h>
main()
{
	int a,b,c,avg;
	
	printf("Enter the three values to find average:");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("The average of entered numbers is = %f",((float)(a+b+c))/3);//using float keyword because avg may be in float so writing here to get float/accurate value
} 

