#include<stdio.h>// Print storng number (145 --> 1! + 4! + 5! = 145)

void main(){
    int i, r, n, fact,m, sum =0;
    printf("Enter a number \n");
    scanf("%d", &n);
    m = n;
    while(n>0){
       r = n%10;
       n = n/10;
       fact = 1;
       for ( i = 1; i <= r; i++)
       {
        fact = fact * i;
       }
       sum = sum+ fact;
    }
    if(m==sum)
      printf("%d is strong number",sum);
    else
      printf("%d is not strong number", sum);  
    
}