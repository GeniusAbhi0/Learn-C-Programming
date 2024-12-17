#include<stdio.h>    // AVERAGE OF NUMBER USING ARRAY

void main(){
    int a[100], i, n, sum =0,avg;
    printf("How many numbers you want to enter:\n");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array element are here\n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
        avg = sum/n;
    }
    printf("The avg of the number is %d:", avg);
}