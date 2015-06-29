#include<stdio.h>
#include<conio.h>
int binsearch(int a[], int start, int end, int item)
{
	int res=-1;
	int mid;
	if(end<start)
	return res;
	mid=((start+end)/2);
	if(item==a[mid])
	{
		res=mid;
		return res;
	}
	else
	{
		if(item<a[mid])
		{
			binsearch(a, 0, mid-1, item);
		}
		else
		{
			binsearch(a, mid+1, end, item);
		}
	}
}
void main()
{
	int a[10], i, s, item, res=-1;
	clrscr();
	printf("Enter no. of elements [MAX 10]: ");
	scanf("%d", &s);
	for(i=0; i<s; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("Enter item to search: ");
	scanf("%d", &item);
	res=binsearch(a, 0, s-1, item);
	if(res!=-1)
	{
		printf("%d found in %d", item, res);
	}
	else
	{
		printf("%d not found", item);
	}
	getch();
}