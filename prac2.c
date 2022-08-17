#include<stdio.h>
#include<conio.h>

void quick(int a[],int low,int up)
{
	int pivotloc;
	if(low>=up)return;
	pivotloc=partition(a,low,up);
	quick(a,low,pivotloc-1);
	quick(a,pivotloc+1,up);
}

int partition(int a[],int low,int up)
{
	int temp,i,j,pivot;
	i=low+1;
	j=up;
	pivot=a[low];
	while(i<=1)
	{
		while((a[i]<pivot)&&(i<up))i++;
		while(a[i]>pivot)j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;j--;
		}
		else i++;
	}
	a[low]=a[j];
	a[j]=pivot;
	return j;
}

void main()
{
	int n,i;
	printf("How many elements you want to enter: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Data Entered...");
	quick(a,0,n-1);
}
