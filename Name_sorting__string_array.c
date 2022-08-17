#include<stdio.h>
#include<string.h>
main()
{
	char s[4][20],temp[20];
	int i,j;
	printf("Enter 4 Strings:");
	
	for(i=0;i<4;i++)
		gets(s[i]);
			
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		if(stricmp(s[i],s[j])>0)
		{
			strcpy(temp,s[j]);
			strcpy(s[j],s[i]);
			strcpy(s[i],temp);
		}
	}
	for(i=0;i<4;i++)
		puts(s[i]);
}
