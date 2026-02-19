#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100],upper_str[100];
	int i=0;
	printf("\nEnter the string:");
	gets(str);
	while(str[i]!='\o')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			upper_str[i]=str[i]-32;
		}
		else
		{
			upper_str[i]=str[i];
		}
		i++;
	}
	upper_str[i]='\o';
	printf("\nThe string converted into upper is:");
	puts(upper_str);
	getch();
	return 0;
}