#include<stdio.h>
#include<conio.h>
void quicksort(int *a, int start, int end)
{
	int pivot, temp, pindex=start, i;
	pivot=a[end];
	if(start<end)
	{
		for(i=start; i<end; i++)
		{
			if(a[i]<=pivot)
			{
				temp=a[pindex];
				a[pindex]=a[i];
				a[i]=temp;
				++pindex;
			}
		}
		temp=a[end];
		a[end]=a[pindex];
		a[pindex]=temp;
		quicksort(a, start, pindex-1);
		quicksort(a, pindex+1, end);
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
	quicksort(a, 0, s-1);
	for(i=0; i<s; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}