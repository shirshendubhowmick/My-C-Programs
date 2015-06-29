#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
} *head;
void push()
{
	struct node *n1;
	n1=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &n1->data);
	n1->next=head;
	head=n1;
}
void pop()
{
	if(head==NULL)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("%d deleted", head->data);
		head=head->next;
	}
}
void display()
{
	struct node *n1;
	if(head==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		n1=head;
		while(n1!=NULL)
		{
			printf("%d\n", n1->data);
			n1=n1->next;
		}
	}
}
void main()
{
	int s;
	clrscr();
	while(1)
	{
		printf("\n\nEnter 1 to push\n");
		printf("Enter 2 to display\n");
		printf("Enter 3 to pop\n");
		printf("Enter 4 to exit\n");
		printf("Your Choice: ");
		scanf("%d", &s);
		switch(s)
		{
			case 1: push();
				break;
			case 2: display();
				break;
			case 3: pop();
				break;
			case 4: exit(0);
		}
	}
}