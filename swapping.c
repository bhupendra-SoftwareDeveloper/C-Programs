//swapping two numbers
// also there 2nd method

#include<stdio.h>
main()
{
	/*
	int a=60,b=90,temp;
	
	printf("Before swapping: %d\t%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAfter swapping: %d\t%d",a,b);
	*/
	
	//without using third variable
	
	int a=50,b=70;
	
	printf("Before swapping: %d\t%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping: %d\t%d",a,b);
}
