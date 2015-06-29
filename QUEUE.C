#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxq 10
struct queue
{
	int arr[maxq], front, rear;
}static q;
void insert()
{
	clrscr();
	if(q.rear>=maxq-1)
	{
		printf("Queue is full, press any key to return...");
		getch();
	}
	else
	{
		if(q.front==-1)
		{
			q.rear=q.front=0;
		}
		else
		{
			++q.rear;
		}
		printf("Enter the element: ");
		scanf("%d", &q.arr[q.rear]);
	}
}
void deleteq()
{
	clrscr();
	if(q.rear==-1)
	{
		printf("Queue is empty, press any key to return...");
		getch();
	}
	else
	{
		if(q.rear==q.front)
		{
			printf("%d deleted from queue, press any key to return", q.arr[q.front]);
			q.rear=q.front=-1;
			getch();
		}
		else
		{
			printf("%d deleted from queue, press any key to return", q.arr[q.front]);
			++q.front;
			getch();
		}
	}
}
void display()
{
	int i;
	clrscr();
	if(q.front==-1)
	{
		printf("The queue is empty, press any key to return");
		getch();
	}
	else
	{
		for(i=q.front; i<=q.rear; i++)
		{
			printf("%d \t", q.arr[i]);
		}
		printf("\nPress any key to return");
		getch();
	}
}
void main()
{
	int s;
	q.front=q.rear=-1;
	a:
	clrscr();
	printf("Enter 1 to insert\n");
	printf("Enter 2 to delete\n");
	printf("Enter 3 to display\n");
	printf("Enter 4 to exit\n");
	printf("Your choice: ");
	scanf("%d", &s);
	switch(s)
	{
		case 1: insert();
			goto a;
		case 2: deleteq();
			goto a;
		case 3: display();
			goto a;
		case 4: exit(0);
		default: printf("Invalid choice, press any key to try again...");
			getch();
			goto a;
	}
}