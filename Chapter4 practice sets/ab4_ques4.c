/*
     SUM OF A NUMBER  using while loop
*/
#include<stdio.h>

void main(){
    int a, n, sum=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (n>0)
    {
        a= n%10;
        sum= sum + a;
        n = n/10;
    }
    printf("The sum of a number is %d", sum);
    
}