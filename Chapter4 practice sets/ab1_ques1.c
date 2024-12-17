/*
     FACTORIAL OF GIVEN NUMBER USING WHILE LOOP
*/
#include<stdio.h>

void main(){
    int i=1, n, fact=1;
    printf("Enter the no. for factorial");
    scanf("%d", &n);
      while (i<=n)
      {
        fact = fact*i;
        i++;
      }
      printf("The factorial of a given no. is %d", fact);
       
}