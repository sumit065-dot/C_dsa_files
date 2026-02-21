#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 5
#pragma warn-rch

struct stack
{
    int top;
    int item[max];
};
typedef struct stack s;

int isEmpty(s*);
int isFull(s*);
void push(s*, int);
void pop(s*);
void display(s*);

int main() {
    s st;
    int x, ch;
    clrscr();
    st.top = -1;

    while (1) {
	printf("\n1 = Push");
	printf("\n2 = Pop");
	printf("\n3 = Display");
	printf("\n4 = Quit");
	printf("\nEnter your choice: ");
	scanf("%d", &ch);

	switch (ch) {
	    case 1:
		printf("Enter value to push: ");
		scanf("%d", &x);
		push(&st, x);
		break;

	    case 2:
		pop(&st);
		break;

	    case 3:
		display(&st);
		break;

	    case 4:
		exit(0);

	    default:
		printf("Invalid choice!!\n");
	}
    }
    getch();
    return 0;
}

int isEmpty(s *s1) {
    return (s1->top == -1);
}

int isFull(s *s1) {
    return (s1->top == max - 1);
}

void push(s *s1, int x) {
    if (isFull(s1)) {
	printf("\nOverflow!! Stack is full\n");
	return;
    }
    s1->top++;
    s1->item[s1->top] = x;
    printf("%d pushed onto stack.\n", x);
}

void pop(s *s1) {
    if (isEmpty(s1)) {
	printf("\nUnderflow!! Stack is empty\n");
	return;
    }
    int x = s1->item[s1->top];
    s1->top--;
    printf("The popped element is %d\n", x);
}

void display(s *s1) {
    if (isEmpty(s1)) {
	printf("\nStack is empty\n");
	return;
    }
    printf("\nElements in stack:");
    for (int i = s1->top; i >= 0; i--) {
	printf("%d\t", s1->item[i]);
    }
}

