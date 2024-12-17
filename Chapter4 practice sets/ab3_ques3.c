/*
   Sum of digits
*/
#include<stdio.h>

void main(){
    int i, n, sum=0;
    printf("Enter the no. for sum:\n");
    scanf("%d", &n);
    for ( i = 0; i <=n; i++)
    {
        sum = sum+i;
    }
    printf("The sum of digits is %d",sum);
    
}