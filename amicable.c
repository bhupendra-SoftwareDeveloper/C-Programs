//first num factor sum = second num & second num factor sum = first num
#include<stdio.h>
main()
{
	int f,s,i,tmp1,tmp2,sum1=0,sum2=0;
	printf("Enter the first number & second number:");
	scanf("%d %d",&f,&s);
	tmp1=f;
	tmp2=s;
	
	for(i=1;i<=f/2;i++)
	   	if(f%i==0)sum1+=i;
	
	for(i=1;i<=s/2;i++)
	   	if(s%i==0)sum2+=i;
    
	if(sum1==s&&sum2==f)
		printf("Amicable Numbers");
	else
		printf("!!Not Amicable Numbers");
}
