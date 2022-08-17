#include<stdio.h>
main()
{
	int a[100],n,r,p,b;
	
	printf("How many elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);

	for(r=0;r<n;r++)
	{
		scanf("%d",&a[r]);
		printf("%4d",a[r]);	
	}
	
	printf("\nEnter position: ");
	scanf("%d",&p);
	
	for(b=0;b<p;b++)
		a[n+b]=a[b];
	for(b=p;b<n+p;b++)
		printf("%4d",a[b]);
}
