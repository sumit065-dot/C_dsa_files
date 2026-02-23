#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10]={-1};
	clrscr();
	int i,j,n,flag=1,gap_size,temp;
	printf("\nEnter the number of element in the array:\n");
	scanf("%d",&n);
	printf("\nEnter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	gap_size=n;
	while(flag==1||gap_size>1)
	{
		flag=0;
		gap_size=(gap_size+1)/2;
		for(i=0;i<(n-gap_size);i++)
		{
			if(arr[i+gap_size]<arr[i])
			{
				temp=arr[i+gap_size];
				arr[i+gap_size]=arr[i];
				arr[i]=temp;
				flag=0;
			}
		}
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
	return 0;
}
