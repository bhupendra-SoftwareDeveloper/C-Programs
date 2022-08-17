#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev;
	struct node *next;
};

struct node *start;
void display(struct node *start)
{
	struct node *p;
	p=start;
	if(start==NULL)
	{
		printf("\nDouble Linked List is Empty...");
		return;
	}
	printf("\nDouble Linked List Elements are: ");
	while(p!=NULL)
	{
		printf("%d\t",p->info);
		p=p->next;
	}
}
struct node* insert_at_begining(struct node *start,int data)
{
	struct node *tmp,*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->info=data;
	p->prev=NULL;
	p->next=start;
	start->prev=p;
	start=p;
	return start;
}

struct node* insert_at_empty(struct node *start,int data)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->next=NULL;
	temp->prev=start;
	start=temp;
	return start;
}

struct node* insert_at_end(struct node *start,int data)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p->next!=NULL)
		p=p->next;
	temp->next=NULL;
	temp->prev=p;
	p->next=temp;
	return start;
} 

struct node* insert_after(struct node *start,int data,int elem)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p->next!=NULL)
	{
		if(p->info==elem)
		{
			temp->next=p->next;
			temp->prev=p;
			if(p->next!=NULL)
				p->next->prev=temp;
			p->next=temp;
			return start;
		}
		p=p->next;
	}
	printf("Element not found!");
	return start;
}
struct node* create(struct node *start)
{
	int i,n,data;
	start=NULL;
	printf("Enter how many nodes you want:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("No Nodes Are Here..");
		return start;
	}
	printf("Enter 1st element:");
	scanf("%d",&data);
	start=insert_at_empty(start,data);
	for(i=2;i<=n;i++)
	{
		printf("Enter %d element:",i);
		scanf("%d",&data);
		start=insert_at_end(start,data);
	}
	return start;
}

struct node* deletes(struct node *start,int elem)
{
	struct node *p,*temp;
	p=start;
	if(p==NULL)
	{
		printf("\nDouble Linked List is Empty...");
		return;
	}
	while(p!=NULL)
	{
		temp=p;
		if(start->info==elem)
		{
			if(p->next!=NULL)
				start->next->prev=start->prev;
			start=p->next;
			free(temp);
			return start;
		}
		
		if(p->info==elem)
		{
			p->prev->next=temp->next;
			if(p->next!=NULL)
				p->next->prev=temp->prev;
			free(temp);
			return start;
		}
		p=p->next;
	}
	printf("Entered Element is not available");
	return start;
}

void main()
{
	start=create(start);
//	start=insert_at_begining(start,55);
//	start=insert_at_end(start,66);
//	start=insert_after(start,28,22);
	display(start);
	start=deletes(start,11);
	display(start);
}
