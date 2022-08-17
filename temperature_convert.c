//Celsius to Farenheit & Farenheit to Celsius

#include<stdio.h>
main()
{
	int n,i;
	float d=1.8,f=32,c,e;
	printf("Enter the Temperature:");
	scanf("%d",&n);
	
	c=-17.77778;
	e=0.55555;
	for(i=1;i<=n;i++)
	{
		f=f+d;
		c=c+e;
	}
	printf("%d%c Celsius = %.1f%c Farenheit\n",n,248,f,248);
	printf("%d%c Farenheit = %.1f%c Celsius",n,248,c,248);
}
