#include<stdio.h>
#include<conio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
void main()
{
	int i, n, c=1;
	clrscr();
	printf("How many nos. do you want? : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\n", fib(c));
		++c;
	}
	getch();
}