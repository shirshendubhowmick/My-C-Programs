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
	clrscr();
	printf("GCD: %d", gcd(10, 12));
	getch();
}