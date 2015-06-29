#include<stdio.h>
#include<conio.h>
void inssort(int a[], int s)
{
	int i, j, temp;
	for(i=0; i<s; i++)
	{
		temp=a[i];
		for(j=i-1; j>=0; j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
				a[j]=temp;
			}
			else
			{
				break;
			}
		}
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
	inssort(a, s);
	for(i=0; i<s; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}