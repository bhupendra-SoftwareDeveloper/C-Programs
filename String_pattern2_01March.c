
#include<stdio.h>
main()
{
	char a[50];
	int i,j;
	printf("Enter String:");
	gets(a);
	for(i=0;a[i];i++)
		{
			for(j=0;j<=i;j++)
				printf("%c",a[j]);
				printf("\n");
		}
}
