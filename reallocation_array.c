#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,*p,i,n2=0,j;
	char ch;
	printf("How many values you want to enter:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter %d integer values:",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	
	printf("Do you want to enter extra new values[Y/N]:");
	scanf(" %c",&ch);
	if(ch=='y'||ch=='Y')
	{	
		printf("Now, this time how many values you want to enter:");
		scanf("%d",&n2);
		p=(int *)realloc(p,(n+n2)*sizeof(int));
		printf("Enter %d integer values:",n2);
		for(j=i;j<n+n2;j++)
			scanf("%d",p+j);
	}
	
	printf("Elements are:");
	for(i=0;i<n+n2;i++)
		printf("%4d",*(p+i));
	
	free(p);p=NULL;
}
