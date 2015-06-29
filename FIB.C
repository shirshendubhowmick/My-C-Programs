#include<stdio.h>
#include<conio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}
void main()
{
	int i;
	clrscr();
	for(i=0; i<=10; i++)
	{
		printf("%d\n", fib(i));
	}
	getch();
}