#include <stdio.h>
#include <conio.h>
#define size 10   // base (decimal system)

int largest(int arr[], int n);
void radix_sort(int arr[], int n);

int main() {
    int arr[size], i, n;
    clrscr();
    printf("\nEnter the no. of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    radix_sort(arr, n);

    printf("\nThe sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    getch();
    return 0;
}

int largest(int arr[], int n) {
    int large = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    return large;   // return after loop ends
}

void radix_sort(int arr[], int n) {
    int bucket[size][size], bucket_count[size];
    int i, j, k, remainder, NOP = 0, divisor = 1, large, pass;

    large = largest(arr, n);

    // Count number of digits in the largest number
    while (large > 0) {
        NOP++;
        large /= 10;
    }

    for (pass = 0; pass < NOP; pass++) {
        for (i = 0; i < size; i++) {
            bucket_count[i] = 0;
        }

        // Place elements into buckets
        for (i = 0; i < n; i++) {
            remainder = (arr[i] / divisor) % 10;
            bucket[remainder][bucket_count[remainder]] = arr[i];
            bucket_count[remainder]++;
        }

        // Collect back into array
        i = 0;
        for (k = 0; k < size; k++) {
            for (j = 0; j < bucket_count[k]; j++) {
                arr[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;
    }
}

