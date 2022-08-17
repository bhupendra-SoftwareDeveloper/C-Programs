//factor of n number and count the numbers of factor
//like: 6= 1,2,3,6 reminder=0 count=4 here,1,2,3,6 are factor

#include<stdio.h>
main()
{
	int n,i,count=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		if(n%i==0)
		{
			printf("%d\n",i);
			count++;
		}
		printf("\nNumber of factor = %d",count);
}
