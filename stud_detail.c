//print the student detail via users

#include<stdio.h>
main()
{
	char s;
	int m;
	float a;
	
	printf("Enter the Section:\n");
	scanf("%c",&s);
	printf("Enter the Marks:\n");
	scanf("%d",&m);
	printf("Enter the Average:");
	scanf("%f",&a);
	
	printf("\nSection:%c \n Marks:%d\n Average:%f",s,m,a);
	
}
