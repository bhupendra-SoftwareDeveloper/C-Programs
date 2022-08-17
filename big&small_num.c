#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is biggest value",a);
			b<c?printf("\n%d is smallest value",b):printf("\n%d is smallest value",c);
		}
		else
		{
			printf("%d is biggest value",c);
			a<b?printf("\n%d is smallest value",a):printf("\n%d is smallest value",b);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is biggest value",b);
			a<c?printf("\n%d is smallest value",a):printf("\n%d is smallest value",c);
		}
		else
		{
			printf("%d is biggest value",c);
			a<b?printf("\n%d is smallest value",a):printf("\n%d is smallest value",b);
		}
	}
}
