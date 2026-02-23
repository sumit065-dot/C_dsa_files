#include <stdio.h>
#include <conio.h>

int Smallest(int a[], int k, int n);
void Selection_Sort(int a[], int n);

void main() {
    int a[100], n, i;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    Selection_Sort(a, n);
    getch();
}

int Smallest(int a[], int k, int n) {
    int pos = k;
    int small = a[k];
    int i;

    for(i = k + 1; i < n; i++) {
        if(a[i] < small) {
            small = a[i];
            pos = i;
        }
    }
    return pos;
}

void Selection_Sort(int a[], int n) {
    int k, pos, temp;

    for(k = 0; k < n - 1; k++) {
	pos = Smallest(a, k, n);
	temp = a[k];
	a[k] = a[pos];
	a[pos] = temp;
    }
    printf("\nSorted elements are:\n");
    for(int i = 0; i< n; i++) {
	printf("%d\t", a[i]);
    }
}

