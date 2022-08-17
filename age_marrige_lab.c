#include<stdio.h>
main()
{
	int age,gen;
	
	printf("1.MALE\n2.FEMALE");
	printf("\nEnter the Gender number: ");
	scanf("%d",&gen);

	if(gen==1)
		{
			printf("\nEnter the age : ");
			scanf("%d",&age);
				if(age>=21)
					printf("\nHe is eligible for marrige");
				else
					printf("\n!!! He is not eligible for marrige");
		}
	else if(gen==2)
		{
			printf("\nEnter the age : ");
			scanf("%d",&age);
				if(age>=18)
					printf("\nShe is eligible for marrige");
				else
					printf("\n!!! She is not eligible for marrige");
		}
	else
		printf("\n!!!INVALID SELECTION");
}
