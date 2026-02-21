#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
#pragma warm-rich

int top=-1;
int arr[max];
void push(int);
void pop();
void display();
void main()
{
	int ch,num;
	clrscr();
	while(1)
	{
		printf("\n1=push");
		printf("\n2=pop");
		printf("\n3=display");
		printf("\n4=quit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element\n");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}
	getch();
}
void push(int n)
{
	clrscr();
	if(top==max-1)
	{
		printf("\noverflow");
		return ;
	}
	top++;
	arr[top]=n;
}
void pop()
{
	int r;
	clrscr();
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		r=arr[top];
		top--;
		printf("\nThe popped element=%d\n",r);
	}
}
void display()
{
	clrscr();
	if(top==1)
	{
		printf("\nUnderflow");
	}
	for(int i=top;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}