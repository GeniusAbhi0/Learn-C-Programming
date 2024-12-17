/*
        MULTIPLICATION OF GIVEN NUMBER IN REVERSE
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (int i = 10; i>=1; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
}