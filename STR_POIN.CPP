//use pointer method to copy string

#include<stdio.h>
#include<conio.h>

int main()
{
	char str[100],copy_str[100];
	char *pstr,*pcopy_str;
	clrscr();
	pstr=str;
	pcopy_str=copy_str;
	printf("\nEnter the string:");
	gets(str);
	while(*pstr!='\o')
	{
		*pcopy_str=*pstr;
		pstr++;
		pcopy_str++;
	}
	*pcopy_str='\o';
	printf("\nThe copied text is:");
	while(*pcopy_str!='\o')
	{
		printf("%c",*pcopy_str);
		pcopy_str++;
	}
	getch();
	return 0;
}