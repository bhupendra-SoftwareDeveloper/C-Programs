#include<stdio.h>
main()
{
	int n,a[100],elem,i,j,c=0;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers = ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Which number you want to delete:");
	scanf("%d",&elem);
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			c++;
			for(j=i;j<n;j++)
				a[j]=a[j+1];
			i--;
		}
	}
	if(c==0) printf("You want to delete %d but %d is not inserted",elem,elem);
	else
	{
		for(i=0;i<n-c;i++)
		printf("Remaining Elements = %4d",a[i]);
	}
}
