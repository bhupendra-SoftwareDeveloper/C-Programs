#include<stdio.h>
main()
{
	char s[100];
	int i,n,a[256]={0};
	printf("Enter the String:");
	gets(s);	
	for(i=0;s[i]!='\0';i++)
	{ 	n=s[i];
		a[n]=a[n]+1;
	}
		
	for(i=0;i<256;i++)
	{
		if(a[i]!=0)
		{
			if(i==' ') printf("Space");
			printf("%c found : %d times",i,a[i]);
			printf("\n");
		}
	}
}
