//Even Odd without using % modules operator.
#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	if((n&1)==0)
		printf("EVEN");
	else
		printf("ODD");
}
