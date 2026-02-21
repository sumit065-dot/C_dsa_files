#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5

struct queue
{
	int front,rear;
	int item[max];
};
typedef struct queue q;
int isEmpty(q*);
int isFull(q*);
void push(q*,int);
void pop(q*);
void display(q*);

int main()
{
	q qu;
//	clrscr();
	int x,ch;
	qu.front=-1;
	qu.rear=-1;
	while(1)
	{
	//	printf("\n QUEUE WITH STRUCTURE\n");
		printf("\n1=push");
		printf("\n2=pop");
		printf("\n3=display");
		printf("\n4=quit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value to push:");
				scanf("%d",&x);
				push(&qu,x);
				break;
			case 2:
				pop(&qu);
				break;
			case 3:
				display(&qu);
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice\n");
		}
	}
	getch();
	return 0;
}
int isEmpty(q *q1)
{
	return (q1->front==-1);
}
int isFull(q *q1)
{
	return (q1->rear==max-1);
}
void push(q *q1,int x)
{
	if(isFull(q1))
	{
		printf("\nOverflow\n");
		return ;
	}
	if(q1->front==-1)
		q1->front=0;
	q1->rear++;
	q1->item[q1->rear]=x;
	printf("%d pushed into queue\n",x);
}
void pop(q *q1)
{
	if(isEmpty(q1))
	{
		printf("\nUnderflow \n");
		return;
	}
	int x=q1->item[q1->front];
	printf("The popped element is %d\n",x);
	if(q1->front==q1->rear)
	{
		q1->front=q1->rear=-1;
	}
	else
	{
		q1->front++;
	}
}
void display(q *q1)
{
	if(isEmpty(q1))
	{
		printf("\nQueue is empty\n");
	}
	printf("\nElements in queue:");
	for(int i=q1->front;i<=q1->rear;i++)
	{
		printf("%d\t",q1->item[i]);
	}
	printf("\n");
}

                                  
