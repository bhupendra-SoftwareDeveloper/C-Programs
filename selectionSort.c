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
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}
