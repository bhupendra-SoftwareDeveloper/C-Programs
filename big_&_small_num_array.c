#include<stdio.h>
main()
{
	int a[100],n,i,max=-32768,min=32767;
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}
	printf("Bigest number=%d\nSmallest number=%d",max,min);
}
