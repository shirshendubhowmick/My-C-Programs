#include<stdio.h>
#include<conio.h>
#define max 5
struct cquqeue
{
	int arr[max], front, rear;
}s;
void enqueue()
{
	int n;
	if((s.front==0 && s.rear==max-1) || (s.front==s.rear+1))
	{
		printf("\n\nQueue is full...");
	}
	else
	{
		printf("\n\nEnter the element: ");
		scanf("%d", &n);
		if(s.front==-1 && s.rear==-1)
		{
			s.front=s.rear=0;
		}
		else if(s.rear==max-1)
		{
			s.rear=0;
		}
		else
		{
			++s.rear;
		}
		s.arr[s.rear]=n;
		printf("\n\n%d inserted sucessfully...");
	}
}
void dequeue()
{
	if(s.front==-1 && s.rear==-1)
	{
		printf("\n\nQueue is empty...");
	}
	else
	{
		printf("\n\n%d deleted...", s.arr[s.front]);
		if(s.front==s.rear)
		{
			s.front=s.rear=-1;
		}
		else if(s.front==max-1)
		{
			s.front=0;
		}
		else
		{
			++s.front;
		}
	}

}
void display()
{
	int i;
	if(s.front==-1 && s.rear==-1)
	{
		printf("\n\nQueue is empty...");
	}
	else
	{
		printf("\n\nElements in queue are:\n");
		if(s.front<=s.rear)
		{
			for(i=s.front; i<=s.rear; i++)
			{
				printf("%d\t", s.arr[i]);
			}
		}
		else
		{
			for(i=s.front; i<max; i++)
			{
				printf("%d\t", s.arr[i]);
			}
			for(i=0; i<=s.rear; i++)
			{
				printf("%d\t", s.arr[i]);
			}
		}
	}
}
void main()
{
	int sw;
	clrscr();
	s.front=s.rear=-1;
	while(1)
	{
		printf("\n\nEnter 1 to insert\n");
		printf("Enter 2 to delete\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to exit\n");
		printf("Your choice: ");
		scanf("%d", &sw);
		switch(sw)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4: exit(0);
			default: printf("Invalid choice, please try again...");
		}
	}
}