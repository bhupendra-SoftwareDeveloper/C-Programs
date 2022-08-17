/*prog on c for checking that person is eligible for vaccine or not.
if person has completed 1st dose then,show person is eligible for 2nd dose.
if person get 1st dose but not taken 2nd then show to get vaccinate*/

#include<stdio.h>
main()
{
	int age,f,s;
		
	printf("Enter the age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nEligible for Vaccine");
		printf("\nHas your complete 1st dose ?");
		printf("\n1.YES\n2.NO");
		scanf("%d",	&f);
			if(f==1)
				{
					printf("\nYour 1st dose Vaccination has completed");
					
					printf("\nHas your complete 2nd dose ?");
					printf("\n1.YES\n2.NO");
					scanf("%d",	&s);
					if(s==1)
						printf("\nYou are fully Vaccinated...");
					else if(s==2)
						printf("\nYou need to get 2nd dose Vaccine.So go your near vaccination center and get vaccinate...");
					else
						printf("!!!INVALID SELECTION...");
				}
			else if(f==2)
				printf("\nYou need to get 1st dose of Vaccine.So go your near vaccination center and get vaccinate.");
			else
				printf("!!!INVALID SELECTION...");
	}	
	else
		printf("\n!!!Not Eligible for Vaccine");
		
}
