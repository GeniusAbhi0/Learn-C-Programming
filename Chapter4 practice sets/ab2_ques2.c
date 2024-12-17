/*
     FACTORIAL OF GIVEN NUMBER USING for LOOP
*/
#include<stdio.h>

void main(){
    int i, n, fact=1;
    printf("Enter the no. for factorial:\n");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of agiven no. is %d", fact);
    
}