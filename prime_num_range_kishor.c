#include<stdio.h>
main()
{
	int n,i,j,c,m,cnt=0;
	printf("Enter the starting number & last number:");
	scanf("%d %d",&i,&n);
	printf("Enter how many prime number you want:");
	scanf("%d",&m);
	printf("Prime numbers:");
	for(;i<=n;i++)
	{c=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				c++;
		if(c==2)
			printf("%3d",i,cnt++);
		if(cnt==m)
		  break;
	}
	if(m>cnt)
			printf("\nIn your selected range there is only [%d] prime numbers",cnt);
}
