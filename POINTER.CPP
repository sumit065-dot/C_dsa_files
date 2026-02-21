#include<stdio.h>
#include<conio.h>

int main()
{
	int *a,b;
	clrscr();
	b=8;
	a=&b;
	printf("A: %p\n",a);
	printf("B: %p\n",b);
	printf("&B: %p\n",&b);
	printf("*A: %p\n",*a);
	getch();
	return 0;
}