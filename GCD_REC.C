#include<stdio.h>
#include<conio.h>
int gcd(int x, int y)
{
	while(x!=y)
	{
		if(x>y)
		{
			return gcd(x-y, y);
		}
		else
		{
			return gcd(x, y-x);
		}
	}
	return x;
}
void main()
{
	int x, y;
	clrscr();
	printf("Enter no. 1: ");
	scanf("%d", &x);
	printf("Enter no. 2: ");
	scanf("%d", &y);
	printf("Result is %d", gcd(x, y));
	getch();
}