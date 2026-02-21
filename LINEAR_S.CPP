#include<stdio.h>
#include<conio.h>

int sequential_search(int[],int,int);
void main()
{
	int x[10],num,key,q;
	clrscr();
	printf("Enter no. of element:");
	scanf("%d",&num);
	printf("Enter elements:\n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter key field:");
	scanf("%d",&key);
	q=sequential_search(x,num,key);
	if(q==-1)
	{
		printf("The searching insucessful");
	}
	else
	{
		printf("The element %d is found at position %d",key,q+1);
	}
	getch();
}
int sequential_search(int x[],int n,int k)
{
	for(int i=1;i<n;i++)
	{
		if(x[i]==k)
		{
			return i;
		}
	}
	return -1;
}
