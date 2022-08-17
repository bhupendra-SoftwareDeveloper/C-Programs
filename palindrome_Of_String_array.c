#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int i,j,k,c=0;
	printf("Enter the String:");
	gets(s);
	strlwr(s);
	for(i=0;s[i]!='\0';i++);
	k=i;
	for(i--,j=0;j<k/2;j++,i--)
	{
		if(s[j]!=s[i])
		{
			printf("%s is Not  Palindrome",s);
			break;
		}
		else c++;
	}
	if(c==k/2) printf("%s is Palindrome",s);		
}
