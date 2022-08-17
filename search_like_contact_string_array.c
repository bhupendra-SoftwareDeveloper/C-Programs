#include<stdio.h>
#include<string.h>
main()
{
	char s[4][20],temp[20],f[20];
	int i,j;
	printf("Enter 4 Strings:");
	
	for(i=0;i<4;i++)
		gets(s[i]);
			
	printf("Enter search string:");
	gets(f);
	
	for(i=0;i<4;i++)
		if(strstr(s[i],f)!=0) puts(s[i]);
}
