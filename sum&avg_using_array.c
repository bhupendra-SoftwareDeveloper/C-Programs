#include<stdio.h>
main()
{
	int a[100],n,i,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Entered number=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum=%d & avg=%.2f",sum,(float)sum/n);
}
