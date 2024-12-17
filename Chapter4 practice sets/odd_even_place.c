#include<stdio.h> // Sum of Even place number and odd place number

void main(){
    int a[100], i, n, sumE=0, sumO=0;
    printf("How many elements you want to enter\n");
    scanf("%d", &n);
    printf("Enter the array elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            sumE = sumE + a[i];
        }
         
    }
     for ( i = 0; i < n; i++)
     {
         if (i%2 !=0)
         {
            sumO = sumO + a[i];
         }
         
     }
     
    printf("Even place number sum is %d", sumE);
    printf("\n");
    printf("Odd place number sum is %d", sumO);
    
    
}