/*
     CHECK GIVEN NUMBER IS PRIME OR NOT
*/
#include<stdio.h>

void main(){
    int n, i, count=0;
    printf("Enter a number :\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0) 
        count++;
    }
    if(count==2)
      printf("Num is prime");
    else
      printf("Num is not prime") ; 
}