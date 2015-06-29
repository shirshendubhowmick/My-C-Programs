#include<stdio.h>
#include<conio.h>
void main()
{
	int i, sa, a[20], b[20], sb, j, c[40], k, l;
	clrscr();
	printf("Enter no. of elements array 1: ");
	scanf("%d", &sa);
	for(i=0; i<sa; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("Enter no. of elements array 2: ");
	scanf("%d", &sb);
	for(i=0; i<sb; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &b[i]);
	}
	i=j=k=0;
	while(i<sa && j<sb)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			++k;
			++i;
		}
		else
		{
			c[k]=b[j];
			++k;
			++j;
		}
	}
	if(i>sa-1)
	{
		for(l=0; l<sb-j; l++)
		{
			c[k+l]=b[j+l];
		}
	}
	else
	{
		for(l=0; l<sa-i; l++)
		{
			c[k+l]=a[i+l];
		}
	}
	for(i=0; i<sa+sb; i++)
	{
		printf("%d\n", c[i]);
	}
	getch();
}