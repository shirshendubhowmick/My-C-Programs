#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 50
struct stack
{
	int arr[MAX], top;
}s;
void push(int n)
{
	if(s.top==MAX-1)
	{
		printf("Stack is full");
	}
	else
	{
		++s.top;
		s.arr[s.top]=n;
	}
}
int pop()
{
	if(s.top==-1)
	{
		printf("Stack empty");
	}
	else
	{
		int temp=s.arr[s.top];
		--s.top;
		return (temp);
	}
}
void main()
{
	int i;
	char str[20];
	s.top=-1;
	clrscr();
	printf("Enter a postfix expression end with $: ");
	gets(str);
	for(i=0; str[i]!='$';  i++)
	{
		if(str[i]==' ')
		{
			continue;
		}
		if(isdigit(str[i]))
		{
			push(str[i]-'0');
		}
		else
		{
			switch(str[i])
			{
				case '+': printf("Result is %d", pop()+pop());
					break;
				case '-': printf("Result is %d", pop()-pop());
					break;
				case '*': printf("Result is %d", pop()*pop());
					break;
				case '/': printf("Result is %d", pop()/pop());
					break;
			}
		}
	}
	getch();
}