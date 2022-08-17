#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int dqueue[size],f=-1,r=-1;

void insert_From_Rear(int x)
{
	if((r==size-1&&f==0)||f==r+1)
	{
		puts("Dqueue is Full");
		exit(0);
	}
	if(f==-1)
		f=0;
	if(r==size-1) r=0;
	else r++;
	dqueue[r]=x;
}

void insert_From_Front(int x)
{
	if((r==size-1&&f==0)||f==r+1)
	{
		puts("Dqueue is Full");
		exit(0);
	}
	if(f==-1)
	{
		r=f=0;
	}
	if(f==0) f=size-1;
	else f--;
	dqueue[f]=x;
}

int delete_From_Front()
{
	int d;
	if(f==-1)
	{ 
		puts("Dqueue is already empty");
		exit(0);
	}
	d=dqueue[f];
	if(f==r)
	{
		f==-1;
		r==-1;
	}
	if(f==size-1) f==0;
	else f++;
	return d;
}

int delete_From_Rear()
{
	int d;
	if(f==-1)
	{ 
		puts("Dqueue is already empty");
		exit(0);
	}
	d=dqueue[r];
	if(f==r)
	{
		f=-1;r=-1;
	}
	else if(r==0) r=size-1;
	else r--;
	return d;
}

void display()
{	int i=f;
	if(f==-1)
	{
		puts("Dqueue is empty");
		exit(0);
	}
	if(f<=r)
	{
		while(i<=r)
		{
			printf("%d\t",dqueue[i]);
			i++;
		}
	}
	else
	{
		while(i<=size-1)
		{
			printf("%d\t",dqueue[i]);
			i++;
		}
		i=0;
		while(i<=r)
		{
			printf("%d\t",dqueue[i]);
			i++;
		}
	}
}

void main()
{
	insert_From_Rear(10);
	insert_From_Rear(20);
	insert_From_Rear(30);
	insert_From_Rear(40);
	insert_From_Rear(50);
	delete_From_Front();
	insert_From_Front(60);
	display();
}
