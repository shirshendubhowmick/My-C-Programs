#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
} *head;
void create()
{
	struct node *n1, *temp;
	n1=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &n1->data);
	n1->next=NULL;
	if(head==NULL)
	{
		head=n1;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n1;
	}
}
void display()
{
	struct node *n1;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		n1=head;
		while(n1!=NULL)
		{
			if(n1->next==NULL)
			{
				printf("%d", n1->data);
			}
			else
			{
				printf("%d->", n1->data);
			}
			n1=n1->next;
		}
	}
}
void del_first()
{
	printf("%d deleted", head->data);
	head=head->next;
}
void del_last()
{
	struct node *n1, *n2;
	n1=head;
	if(n1->next==NULL)
	{
		del_first();
		return;
	}
	n2=head->next;
	while(n2->next!=NULL)
	{
		n1=n1->next;
		n2=n2->next;
	}
	printf("\n%d deleted\n", n2->data);
	n1->next=NULL;
}
void add_first()
{
	struct node *n1;
	n1=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &n1->data);
	n1->next=head;
	head=n1;
}
void ins_pos()
{
	int pos, i=1;
	struct node *n1, *temp;
	printf("Enter position: ");
	scanf("%d", &pos);
	n1=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &n1->data);
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		++i;
	}
	n1->next=temp->next;
	temp->next=n1;

}
void del_pos()
{
	int pos, i=2;
	struct node *n1, *n2;
	printf("Enter position: ");
	scanf("%d", &pos);
	n1=head;
	n2=head->next;
	while(i<pos)
	{
		n2=n2->next;
		n1=n1->next;
		++i;
	}
	printf("\n%d deleted\n", n2->data);
	n1->next=n2->next;
}
void main()
{
	int s;
	clrscr();
	while(1)
	{
		printf("\nEnter 1 to create\n");
		printf("Enter 2 delete\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to exit\n");
		printf("Enter 5 to delete last\n");
		printf("Enter 6 to insert at begining\n");
		printf("Enter 7 to insert at a position\n");
		printf("Enter 8 to delete from a position\n");
		printf("Your choice: ");
		scanf("%d", &s);
		switch(s)
		{
			case 1: create();
				break;
			case 2: del_first();
				break;
			case 3: display();
				break;
			case 5: del_last();
				break;
			case 6: add_first();
				break;
			case 7: ins_pos();
				break;
			case 8: del_pos();
				break;
			case 4: exit(0);
		}
	}
	getch();
}