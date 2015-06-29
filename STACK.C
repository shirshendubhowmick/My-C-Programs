#include<stdio.h>
#include<conio.h>
#define MAX 10
struct stack
{
	int arr[MAX];
	int top;
}static s;
void push()
{
	clrscr();
	if(s.top>=MAX-1)
	{
		printf("Stack Overflow. Press any key to continue...");
		getch();
	}
	else
	{
		++s.top;
		printf("Enter element to push: ");
		scanf("%d", &s.arr[s.top]);
		printf("%d pushed to stack, press any key to continue...", s.arr[s.top]);
		getch();
	}
}
void pop()
{
	clrscr();
	if(s.top<=-1)
	{
		printf("Stack underflow. Press any key to continue...");
		getch();
	}
	else
	{
		printf("%d poped from stack, press any key to continue...", s.arr[s.top]);
		--s.top;
		getch();
	}
}
void display()
{
	int i;
	clrscr();
	if(s.top<=-1)
	{
		printf("Stack is empty. Press any key to continue...");
		getch();
	}
	else
	{
		printf("The content of stack are as follows\n");
		for(i=s.top; i>=0; i--)
		{
			printf("%d\n", s.arr[i]);
		}
		printf("Press any key to continue...");
		getch();
	}
}
void main()
{
	int a;
	s.top=-1;
	a:
	clrscr();
	printf("Enter 1 to push.\n");
	printf("Enter 2 to pop.\n");
	printf("Enter 3 to display.\n");
	printf("Enter 4 to exit.\n");
	printf("Your Choice: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1: push();
			goto a;
		case 2: pop();
			goto a;
		case 3: display();
			goto a;
		case 4: exit(0);

		default: printf("Invalid Choice, press any key to try again...");
			getch();
			goto a;
	}
}