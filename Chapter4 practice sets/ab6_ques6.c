#include<stdio.h>

void main(){
    int i, n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    for ( i = 0; i <=n; i++)
    {
        i%i==0 ;
    }
    printf("The total prime number is %d", i);
}