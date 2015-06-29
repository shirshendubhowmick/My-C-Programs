#include<stdio.h>
#include<conio.h>
struct stack
{
	int data;
	struct stack *next;
} *head=NULL, *new_node, *current;
void push()
{
	new_node=(struct stack *)malloc(sizeof (struct stack));
	if(new_node==NULL)
	{
		printf("Memory Error, press any key to continue...");
	}
	else
	{
		printf("Enter data to push: ");
		scanf("%d", &new_node->data);
		if(head==NULL)
		{
			head=new_node;
			head->next=NULL;
		}
		else
		{
			current=head;
			new_node->next=current;
			head=new_node;
		}
		printf("%d pushed to stack, press any key to continue...", new_node->data);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("Stack is empty, press any to continue...");
	}
	else
	{
		current=head;
		while(current!=NULL)
		{
			printf("%d\n", current->data);
			current=current->next;
		}
		printf("Press any key to continue...");
	}
}
void pop()
{
	if(head==NULL)
	{
		printf("Stack underflow, press any key to continue...");
	}
	else
	{
		printf("%d poped from stack, press any key to continue...", head->data);
		head=head->next;
	}
}
void main()
{
	int s;
	a:
	clrscr();
	printf("Enter 1 to push\n");
	printf("Enter 2 to pop\n");
	printf("Enter 3 to display\n");
	printf("Enter 4 to exit\n");
	printf("Your Choice: ");
	scanf("%d", &s);
	switch(s)
	{
		case 1: push();
			getch();
			goto a;
		case 2: pop();
			getch();
			goto a;
		case 3: display();
			getch();
			goto a;
		case 4: exit(0);
		default: printf("Invalid choice, press any key to try again...");
			getch();
			goto a;
	}
}