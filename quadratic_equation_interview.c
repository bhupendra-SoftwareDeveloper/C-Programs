//quadratic equation mostly asked in interviews

#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	double k;
	
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	printf("Enter the value of c=");
	scanf("%d",&c);
	
	k=pow(b,2)-4*a*c;
	printf("\nDiscriminant = %lf",k);
	
	if(k==0)
		printf("\nRoot = %lf",(double)-b/(2*a));
		
	else if(k>0)
		{
			printf("\nRoot1 = %lf",(-b+sqrt(k))/(2*a));//here we are not using double because k is already double
			printf("\nRoot2 = %lf",(-b-sqrt(k))/(2*a));
		}
		
	else
		{
			printf("\nRoot1 = %lf + %lf",(double)-b/(2*a),sqrt(-k)/(2*a));
			printf("\nRoot2 = %lf - %lf",(double)-b/(2*a),sqrt(-k)/(2*a));
		}
}
