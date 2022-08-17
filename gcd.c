//GCD(Greatest Common Divisior) like: 8 & 12, factor of 8=1,2,4
// & 12=1,2,3,4,6 then common greatest divisior(factor)
#include<stdio.h>
main()
{
	int f,s,i,gcd;
	
	printf("Enter the two values:\n");
	scanf("%d\n%d",&f,&s);
	
	for(i=1;i<=f&&i<=s;i++)
		if(f%i==0 && s%i==0)
			gcd=i;
		printf("GCD of %d and %d is = %d",f,s,gcd);
}
