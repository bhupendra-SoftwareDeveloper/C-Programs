//table which user wants:there are 2 ways

#include<stdio.h>
main()
{
	int t,i;
	
	printf("Which table you want:");
	scanf("%d",&t);
	
	i=1;//if we use the for loop way then this initialization must remove
	
	while(i<=10)
	{
		printf("%3d * %2d = %3d\n",t,i,t*i);//3 and 2 is to alignment
		i++;
	}
	
/*(Second way) for(i=1;i<=10;i++)
	printf("%3d * %2d = %3d\n",t,i,t*i);*/
}
