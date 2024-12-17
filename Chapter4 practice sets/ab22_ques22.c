#include<stdio.h> // PRINT SMALLEST NUMBER USING ARRAY

void main(){
    int a[100],i,n,smallest;
    printf("How many elements you want to enter:\n");
    scanf("%d", &n);
    printf("Enter the element for array:\n");
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
     smallest = a[0];
     for ( i = 1; i < n; i++)
     {
        if(a[i]<smallest)
          smallest = a[i];
     }
     printf("%d is smallest number", smallest);
}