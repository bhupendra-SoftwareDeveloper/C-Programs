#include<stdio.h>
main()
{
	int n,j,a[100],elem,pos;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		
	printf("Enter new element & in which position you want to insert:");
	scanf("%d %d",&elem,&pos);
	if(pos>n+1||pos<1) printf("position range is 1-%d",n);
	else{
		pos-=1;
		for(j=n;j>=pos;j--)
		{
			if(j==pos)
			{
				a[j+1]=a[j];
				a[j]=elem;
				break;
			}
			else 
				a[j+1]=a[j];	
		}
		for(j=0;j<=n;j++)
			printf("Updated Elements = %4d",a[j]);
	}
}
