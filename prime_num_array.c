#include<stdio.h>
main()
{
	int a[100],n,i,j,c=0,cnt=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(c=0,j=1;j<=a[i];j++)
			if(a[i]%j==0)c++;
		if(c==2)printf("\nPrime number=%d",a[i],cnt++);
	}
	printf("\nTotal Prime numbers=%d",cnt);
}
