//  FIND Greatest number USING ARRAY
#include<stdio.h>

void main(){
    int a[100], i, n, greatest;
    printf("How many element you want to enter:\n");
    scanf("%d", &n);
    printf("Enter the element for array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array element are here");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    
    greatest = a[0]; // Initialize the greatest variablewith the first element of the array
    for ( i = 1; i < n; i++)
    {
        if (a[i]> greatest)
        {
            greatest = a[i];
        }
        
    }
    printf("%d is greatest number", greatest);
}