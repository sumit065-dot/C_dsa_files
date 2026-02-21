#include<stdio.h>
#include<conio.h>

int binary_search(int[],int,int);
int main()
{
	int x[20],n,key,i,p;
	clrscr();
	printf("Enter no. of element\n");
	scanf("%d",&n);
	printf("Enter %d element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter the element to be search:\n");
	scanf("%d",&key);
	p=binary_search(x,n,key);
	if(p==-1)
	{
		printf("search unsuccefull");
	}
	else
	{
		printf("The element %d found at position %d",key,p+1);
	}
	getch();
	return 0;
}
int binary_search(int a[],int n,int k)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		if(k==a[mid])
		{
			return mid;
		}
		if(k>a[mid])
		{
			lo=mid+1;
		}
		else
		{
			hi=mid-1;
		}
	}
	return -1;
}

