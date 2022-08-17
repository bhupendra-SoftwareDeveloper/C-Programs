#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter the three values : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
			printf("\n%d is biggest value",a);
		else
			printf("\n%d is biggest value",c);
	}
	else if(b>a)
	{
		if(b>c)
			printf("\n%d is biggest value",b);
		else
			printf("\n%d is biggest value",c);	
	}
}
