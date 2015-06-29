#include<stdio.h>
#include<conio.h>
struct node
{
	int exp, coef;
	struct node *next;
}*p1, *p2, *p3;
struct node *insert_s(struct node *head, int coef, int exp)
{
	struct node *temp, *ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->exp=exp;
	temp->coef=coef;
	temp->next=NULL;
	if(head==NULL || exp>head->exp)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL && ptr->exp>exp)
		{
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
	return head;
}
struct node *insert(struct node *head, int exp, int coef)
{
	struct node *temp, *ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->coef=coef;
	temp->exp=exp;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	return head;
}
void add_poly(struct node *head1, struct node *head2)
{
	p3=NULL;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->exp>head2->exp)
		{
			p3=insert(p3, head1->exp, head1->coef);
			head1=head1->next;
		}
		if(head2->exp>head1->exp)
		{
			p3=insert(p3, head2->exp, head2->coef);
			head2=head2->next;
		}
		if(head2->exp==head1->exp)
		{
			p3=insert(p3, head2->exp, (head1->coef+head2->coef));
			head1=head1->next;
			head2=head2->next;
		}
	}
	while(head1!=NULL)
	{
		p3=insert(p3, head1->exp, head1->coef);
		head1=head1->next;
	}
	while(head2!=NULL)
	{
		p3=insert(p3, head2->exp, head2->coef);
		head2=head2->next;
	}
}
void main()
{
	int coef, exp, i, n1, n2;
	struct node *ptr;
	clrscr();
	printf("Enter values for polynomial 1\n");
	printf("Total no. of elements: ");
	scanf("%d", &n1);
	for(i=0; i<n1; i++)
	{
		printf("Enter values for element %d\n", i+1);
		printf("Enter coef: ");
		scanf("%d", &coef);
		printf("Enter exp: ");
		scanf("%d", &exp);
		p1=insert_s(p1, coef, exp);
	}
	printf("Enter values for polynomial 2\n");
	printf("Total no. of elements: ");
	scanf("%d", &n2);
	for(i=0; i<n2; i++)
	{
		printf("Enter values for element %d\n", i+1);
		printf("Enter coef: ");
		scanf("%d", &coef);
		printf("Enter exp: ");
		scanf("%d", &exp);
		p2=insert_s(p2, coef, exp);
	}
	add_poly(p1, p2);
	ptr=p3;
	while(ptr!=NULL)
	{
		if(ptr->next!=NULL)
		printf("%d^%d+", ptr->coef, ptr->exp);
		else
		printf("%d^%d", ptr->coef, ptr->exp);
		ptr=ptr->next;
	}
	getch();
 }