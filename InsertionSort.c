#include<stdio.h>
#include<conio.h>
void main()
{
	int temp,i,j,n=7,k,arr[8]={1,2,3,4,5,6,7};
	
/*	for(i=1;i<=n;i++)	//dsa sir logic
	{
		k=arr[i];
		for(j=i-1;j>=0&&k<arr[j];j--)
			arr[j+1]=arr[j];
		arr[j+1]=k;
	}*/
	
	for(i=0;i<n;i++)	//my logic[1]
	{
		for(j=i+1;j>0&&(arr[j]<arr[j-1]);j--)
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
		}
	}
	
	for(i=1;i<=n;i++)
		printf("%d\t",arr[i]);
	/*
	for(i=1;i<=n;i++)	//my logic[2] if you are using this then array size should be equal to elem
	{
		for(j=i-1;j>0&&(arr[j]<arr[j-1]);j--)
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	*/
}
