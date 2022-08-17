//count the number of digit

#include<stdio.h>
main()
{
	int n,count=0;
	
	printf("Enter the digit : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\nTotal number of digit = %d",count);
}
