#include<stdio.h>
#include<conio.h>
#define size 5
#include<stdlib.h>
int queue[size];
int f=-1,r=-1;
void insert(int x)
{
	if((r==size-1&&f==0)||f==r+1)
	{
		printf("Queue is full");
		exit(0);
	}
	if(f==-1) f=0;
	if(r==size-1) r=0;
	else r++;
	queue[r]=x;
}
void deletes()
{
	if(f==-1)
	{
		puts("Queue is already empty");
		exit(0);
	}
	else if(f==size-1)
		f=0;
	else if(r==f)
	{
	  r=-1;
	  f=-1;
	}
	else f++;
}
void display()
{   int i=f;
//	clrscr();
	if(f==-1)
	{
		printf("Queue is empty");
		exit(0);
	}
	
	if(f<=r)
	{
		while(i<=r)
		{
		  printf("%d\t",queue[i]);
		  i++;
		}
	}
	else
	{
		while(i<=size-1)
		{
		   printf("%d\t",queue[i]);
		  i++;
		}
		i=0;
		while(i<=r)
		{
		  printf("%d\t",queue[i]);
		  i++;
		}
	}
}
void main()
{    
//	clrscr();
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	deletes();
	deletes();
//	display();
	insert(60);
	insert(70);
	deletes();
	deletes();
	deletes();
	deletes();
	deletes();
	display();
}
