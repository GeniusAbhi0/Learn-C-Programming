/*
    TAKE INPUT VALUE AND PRINT NATURAL NUMBER
*/

#include<stdio.h>

void main(){
    int n , i = 1;
    printf("Enter the value natural number: \n"); 
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
}