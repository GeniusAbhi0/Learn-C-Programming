/*
   SUM OF A NUMBER  using for loop
*/
#include<stdio.h>

void main(){
    int a, n, sum=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for ( ;n>0 ; n=n/10) // n>0 is use to stop the loop if it becomes 0 also use to stop infinite loop
    {
        a=n%10;
        sum = sum + a ;
    }
    printf("Sum of number is %d", sum);
}