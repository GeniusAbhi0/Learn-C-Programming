#include<stdio.h> // Arrange number in dec. using ARRAY

void main(){
    int a[100], i, n, j, temp;
    printf("How many elements\n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array element are here:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted one is");
      for ( i = 0; i < n; i++)
      {
        printf("%d ", a[i]);
      }
    printf("\n")  ;
}