#include<stdio.h>
main()
{
	int n,a[' '],elem=0,i,j,check=0;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers = ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to check,did you enter or not:");
	scanf("%d",&elem);
	for(j=0;j<n;j++)
		if(a[j]==elem) check=1;
	if(check==1)printf("Yes, you have entered %d",elem);
	else printf("NO, you not entered %d",elem);
}
