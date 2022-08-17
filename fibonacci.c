#include<stdio.h>
main()
{
	int n,i,n1,n2,n3;
	
	printf("Enter the value : ");
	scanf("%d",&n);
	
	n1=0;
	n2=1;
	
	//printf("%d %d",n1,n2);
		
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		printf(" %d",i);
		
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
			
}
