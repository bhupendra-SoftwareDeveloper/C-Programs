//2 way to print this pattern
#include<stdio.h>
main()
{
	int n,i,j,k=1;
	printf("Enter Row:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)printf("$ ");else printf("* ");  //1st way
			/*if(i%2==0)					//2nd way
			{	if(j%2==1)printf("* ");
				else printf("$ ");
			}
			else
			{	if(j%2==1)printf("$ ");
				else printf("* ");
			}*/
		}
		printf("\n");
	}
}
