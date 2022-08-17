#include<stdio.h>
main()
{
	int i,j,k=3;
	for(i=1;i<=7;i++)
	{
	  j=3;
		for(;j>=k;j--)
        	printf("%2d",j);
			if(i<4)
			k--;
			else
			k++;
		printf("\n");	
			
		
	}
}
