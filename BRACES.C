#include<stdio.h>
#include<conio.h>
struct st
{
	int top;
	char arr[50];
}static s;
void push()
{
	if(s.top>=50)
	{
		printf("Error 1, press any key to exit...");
		getch();
	}
	else
	{
		++s.top;
		s.arr[s.top]='(';
	}
}
void pop()
{
	if(s.top<=-1)
	{
		printf("Error 2, press any key to exit...");
		getch();
	}
	else
	{
		--s.top;
	}
}
void main()
{
	char st[50];
	int i;
	s.top=-1;
	clrscr();
	printf("Enter string to check: ");
	gets(st);
	for(i=0; st[i]!=NULL; i++)
	{
		if(st[i]=='(')
		{
			push();
		}
		else if(st[i]==')')
		{
			pop();
		}
	}
	if(s.top==-1)
	{
		printf("The no. of braces is balanced");
	}
	else
	{
		printf("The no. of braces is not balanced");
	}
	getch();
}