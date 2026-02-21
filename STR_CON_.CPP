//concatenate two string using pointer method

#include<stdio.h>
#include<conio.h>

int main()
{
	char str1[100],str2[100],copy_str[200];
	char *pstr1,*pstr2,*pcopy_str;
	clrscr();
	pstr1=str1;
	pstr2=str2;
	pcopy_str=copy_str;
	printf("\nEnter the first string:");
	gets(str1);
	printf("\nEnter the second string:");
	gets(str2);
	while(*pstr1!='\o')
	{
		*pcopy_str=*pstr1;
		pcopy_str++;
		pstr1++;
	}
	while(*pstr2!='\o')
	{
		*pcopy_str=*pstr2;
		pcopy_str++;
		pstr2++;
	}
	*pcopy_str='\o';
	printf("\nThe concatenate text is:");
	while(*pcopy_str!='\o')
	{
		printf("%c",*pcopy_str);
		pcopy_str++;
	}
	getch();
	return 0;
}