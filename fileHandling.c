#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp=fopen("prac.c","r");
	char ch;
	if(fp==NULL) printf("Unable to create file");
	else 
	{
		printf("Enter your Information:\n");
		printf("------------------------------------\n");
		while((ch=fgetc(fp))!=EOF) putchar(ch);
	}
	fclose(fp);
}
