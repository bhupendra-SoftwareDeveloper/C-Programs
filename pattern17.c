#include<stdio.h>
main()
{
	int i,j,k;
	char n=65,m;		//65 is ASCII value of 'A'
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)	//first printing 3 letter
		{
			printf(" %c",n);
			n++;
		}
		m=n;				//store n value to m
		for(k=4;k<=6;k++)
		{
			printf(" %c",n-1);	//reverse the alphabet
			n--;
		}
		n=m;				//storing n original value
		printf("\n");
	}
}
