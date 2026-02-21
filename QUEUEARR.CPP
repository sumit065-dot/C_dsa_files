#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

int arr[max];
int front=-1,rear=-1;
void insert();
void delete1();
void display();
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n1=insertion");
		printf("\n2=delete");
		printf("\n3=display");
		printf("\n4=quit");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete1();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("wrong choice\n");
		}
	}
	getch();
}
void insert()
{
	int item;
	clrscr();
	if(rear==max-1)
	{
		printf("overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("Enter any no.:\n");
		scanf("%d",&item);
		rear++;
		arr[rear]=item;
	}
}
void delete1()
{
	clrscr();
	if(front==-1||front>rear)
	{
		printf("Underflow\n");
	}
	else
	{
		printf("The element deleted from the queue is=%d",arr[front]);
	}
	front++;
}
void display()
{
	int i;
	clrscr();
	if(front==-1||front>rear)
	{
		printf("Underflow queue\n");
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",arr[i]);
	}
}
