/*
    ARRAYS
    TRAVERSING NUMBER
*/
#include<stdio.h>

void main(){
    int a[100], i, n;
    printf("How many element you want to enter\n");
    scanf("%d", &n);
    printf("Enter the element for array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array element are here");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    
}