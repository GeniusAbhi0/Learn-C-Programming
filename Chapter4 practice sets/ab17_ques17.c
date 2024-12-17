/*
      SUM OF DIGITS USING ARRAY
*/
#include<stdio.h>

void main(){
    int a[100], i, n, sum=0;
    printf("How many numbers you want to enter:\n");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array element are here \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        sum = sum+(a[i]);
    }
    printf("The sum of all digits of the array is %d\n", sum);
}