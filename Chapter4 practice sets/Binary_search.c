#include<stdio.h>

void main(){
    int a[100], i, n, num, first, last, mid;
    printf("How many elements\n");
    scanf("%d", &n);
    printf("Enter the elements for array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element u want to find");
    scanf("%d", &num);
    first = 0;
    last = n-1;
    while (first <= last)
    {
    mid = (first + last)/2 ;
        if (a[mid]>num)
        {
            last = mid - 1;
        }
        else if (a[mid]== num)
        {
            printf("Element found at index %d\n", mid);
            break;
        }
        else{
          first = mid + 1;
        }
    }
    if (first > last)
    {
        printf("Element not found\n");
    }
    
}