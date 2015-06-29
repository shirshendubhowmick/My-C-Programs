#include<stdio.h>
#include<conio.h>
int find_min(int a[], int start, int end)
{
	int i, loc=start;
	for(i=start; i<end; i++)
	{
		if(a[loc]>a[i])
		{
			loc=i;
		}
	}
	return loc;
}
void secsort(int a[], int s)
{
	int i=0, temp, loc;
	for(i=0; i<s; i++)
	{
		loc=find_min(a, i, s);
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
}
void main()
{
	int i, s, a[20];
	clrscr();
	printf("Enter no. of elements: ");
	scanf("%d", &s);
	for(i=0; i<s; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	secsort(a, s);
	for(i=0; i<s; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}