/*
      SUM OF MULTIPLICATION OF NUMBER
*/
#include<stdio.h>

void main(){
    int n, sum=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for ( int i = 1; i <=10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
        sum = sum + n*i;

    }
     printf("The sum is %d", sum);
}