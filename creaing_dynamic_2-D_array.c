#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,nr,nc,**p;
	printf("how many rows & columns you want to enter:");
	scanf("%d %d",&nr,&nc);
	
	p=(int **)calloc(nr,sizeof(int));
	
	for(i=0;i<nr;i++) p[i]=(int *) calloc(nc,sizeof(int));
	
	printf("Enter %d elements:",nr*nc);
	for(i=0;i<nr;i++)
		for(j=0;j<nc;j++)
			scanf("%d",*(p+i)+j);
		
	printf("Elements are: \n");
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
			printf("%3d",*(*(p+i)+j));
		printf("\n");
	}
	free(p[i]);
	p[i]=NULL;
}
