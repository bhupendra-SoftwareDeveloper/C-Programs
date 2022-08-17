#include<stdio.h>
main()
{
	char user[' '],pass[' '],capt[' '];
	x:
	printf("Enter UserID:");
	scanf("%s",user);	//not compulsory to write & for string
	printf("Enter Password:");
	scanf("%s",pass);
	printf("Enter Captcha:");
	scanf("%s",capt);
	
	if(strcmp(user,"Akshay5256")==0&&strcmp(pass,"@twinkall73")==0)
	{
		if(strcmp(capt,"BKBSH")==0)
			puts("Welcome To IRCTC");
		else
			{
			  puts("!!!Invalid Captcha");
			  goto x;			
			}
	}
	else
		puts("!!!Invalid UserID or Password");
	goto x;
}
