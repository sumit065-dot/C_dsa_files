#include <stdio.h>
#include <conio.h>

/* Function to find GCD using recursion */
int gcd(int a,int b)
{
	if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void main()
{
    int num1,num2,result;
	clrscr();   
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    result = gcd(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,result);
    getch();    
}

