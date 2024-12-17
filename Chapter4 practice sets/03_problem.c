#include<stdio.h>

void main(){
    int i=1,n, sum= 0;
    printf("Enter the number:\n");
    scanf("%d",&n);
   // n=i;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum is %d", sum);
}