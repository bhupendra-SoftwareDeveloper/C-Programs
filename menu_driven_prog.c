#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float f,s;
	char op;
	puts("******************************************************");
	puts("\t\t\tM E N U");
	puts("******************************************************");
	puts("\t\t\t+.Addition\n");puts("\t\t\t-.Subtraction\n");
	puts("\t\t\t*.Multiplication\n");puts("\t\t\t/.Divition\n");
	puts("\t\t\t%.Module\n");puts("\t\t\tE.Exit\n");
	puts("******************************************************");
	x:
	printf("\t\t\tEnter Your Choice[ ]\b\b");
	scanf(" %c",&op);
	printf("\t\t\tEnter the two numbers:");
	scanf("\t\t\t%f%f",&f,&s);
	switch(op)
	{
		case '+':
			printf("\t\t\t\t\tSum=%.2f\n",f+s);
			break;
		case '-':
			printf("\t\t\t\t\tSub=%.2f\n",f-s);
			break;
		case '*':
			printf("\t\t\t\t\tMultiplication=%.2f\n",f*s);
			break;
		case '/':
			printf("\t\t\t\t\tDivision=%.2f\n",f/s);
			break;
		case '%':
			printf("\t\t\t\t\tModule=%.2f\n",(fmod)(f,s));
			break;
		case 'e':
		case 'E':
			exit(0);
			break;
		default :
			puts("Invalid Selection");
	}
	puts("******************************************************");
	goto x;
}
