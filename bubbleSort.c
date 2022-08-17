#include<stdio.h>
main()
{
	int n,i,j,a[' '],temp=0;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}
