#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,*p;
	printf("how many elements you want to enter:");
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int));	//p get n*4(int size) 
	printf("Add of P : %u",p);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
		
	printf("Elements are: ");
	for(i=0;i<n;i++)
		printf("%3d",*(p+i));
	free(p);	//deallocation
	p=NULL;
}
