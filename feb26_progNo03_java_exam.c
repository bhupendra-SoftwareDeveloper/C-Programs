#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[100],n,r,s,b,c=0;
	
	printf("How many elements you want to enter:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("-2"); exit(0);
	}
	printf("Enter %d elements:",n);

	for(r=0;r<n;r++)
		scanf("%d",&a[r]);
		
	printf("\nEnter Search value: ");
	scanf("%d",&s);
	
	for(r=0;r<n;r++)
	{
		if(a[r]<1)
		{
			printf("-4"); exit(0);
		}
	}
	
	if(s<1)
	{
		printf("-3"); exit(0);
	} 
	
	for(r=0;r<n;r++)
	{
		if(s==a[r]) c++;
		if(c>0)
		{
		printf("%d is in %d cell",s,r+1);
		break;
		}
	}	
		
	if(c<1)	
	{
		printf("-1"); exit(0);
	}
}
