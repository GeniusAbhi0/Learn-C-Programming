#include<stdio.h>

void main(){
    int f1=0, f2=1, f3, n;
    printf("Enter the no. of term for fibonacci series\n");
    scanf("%d", &n);
    printf("The fibonacci series is %d\n %d", f1, f2);
    for (int i = 1; i <=n; i++)
    {
        f3 = f1 + f2;
        printf("%d", f3);
        f1=f2;
        f2=f3;
    }
    
}