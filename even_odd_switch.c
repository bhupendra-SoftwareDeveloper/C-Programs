#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	switch(n%2)
	{
		case 0:
			printf("EVEN");
			break;
		case 1:
			printf("ODD");
			break;
	}
}
