#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, temp, n;
	clrscr();
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter Sorting\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}