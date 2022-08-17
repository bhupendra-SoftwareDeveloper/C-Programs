#include<stdio.h>
main()
{
	char user[' '],pass[' '];
	x:
	printf("Enter the Username or phone number:");
	scanf("%s",user);
	if(strcmp(user,"akshay002@gamil.com")==0)
	{
		y:
		printf("Enter the password:");
	    scanf("%s",pass);
	    if(strcmp(pass,"akshay002000")==0)
	    {
	    	puts("Welcome Akshay in gamil...");
		}
		else
			{
				puts("!!!Invalid password");
				goto y;
			}
	}
	else
	 	{
	 		puts("!!!Invalid Username");
			goto x;	
		}
}
