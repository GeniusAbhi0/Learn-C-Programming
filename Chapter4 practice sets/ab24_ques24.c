#include<stdio.h>  // SELECTION SORTING

void main(){
    int a[100], i, n, min, pos, j, t;
    printf("How many elements:\n");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = a[i];         // Assume the current element is the minimum
        pos = i;            // Position of the minimum element
        
        for (j = i + 1; j < n; j++) {   // Find the minimum element in the remaining unsorted part
            if (a[j] < min) {
                min = a[j];
                pos = j;         // Update position of minimum element
            }
        }
        // Swap the minimum element with the first unsorted element
        t = a[i];
        a[i] = a[pos];
        a[pos] = t;
    }
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
