#include <stdio.h>
#include <conio.h>
#define MAX 20

void RestoreHeapUp(int *Heap, int index);
void RestoreHeapDown(int *Heap, int index, int n);

int main() {
    int Heap[MAX], n, i, j;
    clrscr();
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &Heap[i]);
        RestoreHeapUp(Heap, i);  // build max heap
    }

    j = n;
    // Heap Sort Process
    for (i = 1; i < j; i++) {
        int temp = Heap[1];
        Heap[1] = Heap[n];
        Heap[n] = temp;
        n = n - 1; 
        RestoreHeapDown(Heap, 1, n);
    }

    printf("\nSorted array is:\n");
    for (i = 1; i <= j; i++) {
        printf("%d ", Heap[i]);
    }

    getch();
    return 0;
}

// Restore property upwards
void RestoreHeapUp(int *Heap, int index) {
    int val = Heap[index];
    while ((index > 1) && (Heap[index / 2] < val)) {
        Heap[index] = Heap[index / 2];
        index /= 2;
    }
    Heap[index] = val;
}

// Restore property downwards
void RestoreHeapDown(int *Heap, int index, int n) {
    int val = Heap[index];
    int j = index * 2;

    while (j <= n) {
        if ((j < n) && (Heap[j] < Heap[j + 1])) {
            j++;
        }
        if (val >= Heap[j]) {
            break;
        }
        Heap[j / 2] = Heap[j];
        j = j * 2;
    }
    Heap[j / 2] = val;
}

