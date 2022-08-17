#include<stdio.h>
main()
{
	char n;
	
	printf("Enter the Alphabet:");
	scanf("%c",&n);
	
	n=tolower(n); //converting capital alphabet to small alphabet
	
	switch(n)
	{
		case 'a':	//here we are writing all case simultaneously because all case optput will be same.
		case 'e':	//so when there are more than 1 case whose output will be same so we can write <- this way,simultaneously.
		case 'i':
		case 'o':	//above we converts the capital alphabet to small alphabet,so we didn't wrote the cases for capital vowels. 
		case 'u':	//if we were not converts the alphabet then we have to write the cases for capital alphabet. 
			printf("VOWEL");
			break;			
		default:
			printf("CONSONANT");
	}
		
}
