/*
          MULTIPLICATION TABLE OF GIVEN NUMBER
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enterr the number:\n");
    scanf("%d", &n);
    for (int i = 1; i <=10; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }       
    
}