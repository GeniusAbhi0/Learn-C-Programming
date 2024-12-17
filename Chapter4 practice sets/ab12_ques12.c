/*
    PRINT 
1
23
456
78910
1112131415
*/
#include<stdio.h>

void main(){
    int i,j, count=0;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            count++;
            printf("%d",count);
        }
        printf("\n");
    }
    
}