#include<stdio.h>
main()
{
	int a[100],n,i,even=0,odd=0,zero=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==1)odd++;
		else if(a[i]==0)zero++;
		else even++;
	}
	printf("Total Even numbers=%d\nTotal Odd numbers=%d\nTotal Zero=%d",even,odd,zero);
}
