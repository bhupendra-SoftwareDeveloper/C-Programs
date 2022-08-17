//use of branching statements(goto(jumping statement/unconditional statement),
//return,exit)
#include<stdio.h>
#include<conio.h>
#include<process.h>//for exit function we also can use stdlib.h
int main()		//int because return is returning 0(int)
{
	puts("I");
	goto x;
	y:
	puts("Singh");
	return 0;		//coming out from prog we must have to write return type
	//exit(0);		//coming out from prog
	x:
	puts("Am");
	puts("Bhupendra");
	goto y;
}
