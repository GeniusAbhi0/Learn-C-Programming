#include<stdio.h>

void main(){
    int a[50][50], b[50][50], c[50][50], k, i, j, m, n;
    printf("Enter the rows and column\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix A\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the elements of matrix B\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    printf("The multiplication of two matrix\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j]=0;
            for ( k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
    
    
}