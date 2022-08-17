//there are two ways to print this programe
#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	/*while(i<=n)	//1st way
	{
		printf("%d+",i);
		sum+=i;
		i++;
	}
	printf("\b=%d",sum);*/
	
	while(i<n)			//2nd way
	{
		printf("%d+",i);
		sum+=i;
		i++;
	}
	printf("%d=%d",i,sum+i);
}
