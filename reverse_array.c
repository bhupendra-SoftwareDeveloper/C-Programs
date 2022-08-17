#include<stdio.h>
main()
{
	int n,a[' '],i,j;
	printf("How many numbers you want to reverse:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>=0;j--)
		printf("%d ",a[j]);
}
