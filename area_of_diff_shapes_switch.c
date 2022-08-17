//area of circle,rectangle,triangle by user input

#include<stdio.h>
main()
{
	int n,r,l,b,h;
	float pi=3.14;
	
	printf("1.CIRCLE \n2.RECTANGLE \n3.TRIANGLE\n");
	printf("Enter the shape number to get area of that shape[1 to 3]: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\nEnter the radius:");
			scanf("%d",&r);
			printf("\nArea of Circle is = %f",(float)pi*r*r);
			break;
		case 2:
			printf("\nEnter the Length:");
			scanf("%d",&l);
			printf("\nEnter the Bredth:");
			scanf("%d",&b);
			printf("\nArea of Rectangle is = %d",l*b);
			break;
		case 3:
			printf("\nEnter the Bredth:");
			scanf("%d",&b);
			printf("\nEnter the Height:");
			scanf("%d",&h);
			printf("\nArea of Triangle is = %d",(b*h)/2);
			break;
		default:
			printf("\n!!!INVALID NUMBER");
	}
}
