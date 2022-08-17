#include<stdio.h>
main()
{
	char user[' '],pass[' '],capt[' '];
	
	printf("Enter UserID:");
	scanf("%s",user);	//not compulsory to write & for string
	printf("Enter Password:");
	scanf("%s",pass);
	printf("Enter Captcha:");
	scanf("%s",capt);
	
	if(strcmp(user,"Akshay5256")==0)
	{
		if(strcmp(pass,"@twinkall73")==0)
		{
			if(strcmp(capt,"BKBSH")==0)
				puts("Welcome To IRCTC");
			else
				puts("!!!Invalid Captcha");
		}
		else
			puts("!!!Invalid Password");
	}
	else
		puts("!!!Invalid UserID");
}
