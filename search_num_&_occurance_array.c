#include<stdio.h>
main()
{
	int n,a[100],occ=0,elem=0,i,j,check=0;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers = ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number to search and occurance:");
	scanf("%d %d",&elem,&occ);
	for(j=0;j<n;j++)
	{
		if(a[j]==elem) 
			check++;
		if(check==occ)
		{
			printf("%d in cell %d %d time",elem,j+1,occ);
			break;
		}
	}
	if (check==0)printf("NO, you not entered %d",elem);
	else if(occ>check)printf("You have not entered %d %d times",elem,occ);
}
