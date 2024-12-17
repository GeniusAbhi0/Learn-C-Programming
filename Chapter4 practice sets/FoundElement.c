#include<stdio.h>

void main(){
    int a[100], i, n, num, flag = 0, j;
    printf("How many elements");
    scanf("%d", &n);
    printf("Enter the element of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d", &num);
    for ( i = 0; i < n; i++)
    {
        if(a[i]== num){
            flag = 1;
            j = i;
        }
    }
    if(flag==1)
      printf("%d element is found at location %d",num , j+1);
    else
      printf("Element not found");  
}