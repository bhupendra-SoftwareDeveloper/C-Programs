#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

struct node *start;

struct node* insert_at_begining(struct node *start,int data)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->info=data;
	p->next=start;
	start=p;
	return start;
}

struct node* insert_at_end(struct node *start,int data)
{
	struct node *p,*temp,*t;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p!=NULL)
	{   if((p->next)==NULL)t=p;
		p=p->next;
	}
	t->next=temp;
	temp->next=NULL;
	return start;
}

void display(struct node *start)
{   
	struct node *p;
	p=start;
	if(start==NULL)
	{
		puts("List is empty");
		return;
	}
	printf("\nSingle Linked List elements are: ");
	while(p!=NULL)
	{
		printf("%d\t",p->info);
		p=p->next;
	}
}

struct node* create(struct node *start)
{
	int i,data,n;
	start=NULL;
	printf("How many nodes you want: ");
	scanf("%d",&n);
	if(n==0)
	return start;
	printf("Enter 1st element: ");
	scanf("%d",&data);
	start=insert_at_begining(start,data);
	for(i=2;i<=n;i++)
	{
		printf("Enter the %d element: ",i);
		scanf("%d",&data);
		start=insert_at_end(start,data);
	}
	return start;
}

struct node* insert_after_item(struct node* start,int data,int item)
{
	struct node *p,*temp;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->info=data;
			temp->next=p->next;
			p->next=temp;
			return start;
		}
		p=p->next;
	}
	printf("Element not found");
	return start;
}

struct node* deletes(struct node *start,int item)
{
	struct node *p,*tmp;
	if(start==NULL)
	{
		printf("List is already Empty");
		return start;
	}
	p=start;
	if(start->info==item)
	{
		start=start->next;
		free(p);
		return start;
	}
	while(p->next!=NULL)
	{
		if(p->next->info==item)
		{
			tmp=p->next;
			p->next=tmp->next;
			free(tmp);
			return start;
		}
		p=p->next;
	}
}
void main()
{
	start=create(start);
	start=insert_at_end(start,99);
	start=insert_after_item(start,45,22);
	display(start);
	start=deletes(start,99);
	display(start);
}

