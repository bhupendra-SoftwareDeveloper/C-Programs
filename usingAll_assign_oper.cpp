//using all assignment operator

#include<stdio.h>
main()
{
	int x=30;     //30 assigns into x
	
	x+=5;				//Now x is 30 x=x+5 => x=30+5 
	printf("%d\n",x);	//o/p => x=35
	
	x*=7;				//Now x is 35 x=x*7 => x=35*7 
	printf("%d\n",x);	//o/p => x=245
	
	x-=20;				//Now x is 245 x=x-20 => x=245-20 
	printf("%d\n",x);	//o/p => x=225
	
	x/=5;				//Now x is 225 x=x/5 => x=225/5 
	printf("%d\n",x);	//o/p => x=45
	
	x%=6;				//Now x is 45 x=x%6 => x=35%6 
	printf("%d\n",x);	//o/p => x=3
}
