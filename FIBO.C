#include<stdio.h>
#include<conio.h>
int fibonacci(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if ( n == 1 )
   {
      return 1;
	}
   else
      return ( fibonacci(n-1) + fibonacci(n-2) );
}

void main()
{
   int n, i = 0, c;
   clrscr();
   printf("How many no. do you want?: ");
   scanf("%d",&n);

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fibonacci(i));
      i++;
   }
   getch();
}