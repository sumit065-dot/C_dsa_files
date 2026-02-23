#include<stdio.h>
#include<conio.h>

void bubble_sort(int[],int);
void main()
{
	int x[20],n,i;
	clrscr();
	printf("Enter no. of element:\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	bubble_sort(x,n);
	getch();
}
void bubble_sort(int a[],int n)
{
	int temp,pass,i;
	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-pass-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}