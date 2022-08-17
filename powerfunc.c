//using power,square root ,sin,cos,tan this all is math function so we must write #include<math.h>

#include<math.h>
#include<stdio.h>
main()
{
	double k;
	
	k=pow(2,3);
	printf("2 Power 3 = %lf",k);
	
	k=sqrt(100);
	printf("\nSquare root of 100 is = %lf",k);
	
	k=sin(90*3.14/180);
	printf("\nSin90 value is = %lf",k);
	
	k=cos(0*3.14/180);
	printf("\nCos0 value is = %lf",k);
	
	k=tan(45*3.14/180);
	printf("\nTan45 value is = %lf",k);
}
