#include<stdio.h>    // NUMBER IS EVEN OR ODD

void main(){
    int a[100], i, n;
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
        if ( (a[i]%2 == 0))
        {
            printf("number is even %d\n",a[i] );
        }
        else
           printf("number is odd %d\n", a[i]);
        
        
    }
    
}