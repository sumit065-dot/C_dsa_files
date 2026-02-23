#include<stdio.h>
#include<conio.h>

void insertion(int[],int);
void main()
{
	int x[20],n,i;
	clrscr();
	printf("Enter no. of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	insertion(x,n);
	getch();
}
void insertion(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while((i>-1)&&a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

