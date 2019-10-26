Circular Matrix(Construct a matrix with numbers 1 to m*n in spiral way)

#include<stdio.h>
void spiralFill(int m, int n, int a[][100]) 
{ 
    int val = 1; 
    int k = 0, l = 0; 
    while (k < m && l < n) 
    { 
        for (int i = l; i < n; ++i) 
            a[k][i] = val++; 
  
        k++; 
        for (int i = k; i < m; ++i) 
            a[i][n-1] = val++; 
        n--; 
        if (k < m) 
        { 
            for (int i = n-1; i >= l; --i) 
                a[m-1][i] = val++; 
            m--; 
        } 
        if (l < n) 
        { 
            for (int i = m-1; i >= k; --i) 
                 a[i][l] = val++; 
            l++; 
        } 
    } 
} 
int main() 
{ 
    int m = 3, n = 4,i,j; 
    int a[100][100];
    spiralFill(m, n, a); 
    for (i=0; i<m; i++) 
    { 
       for (j=0; j<n; j++) 
          printf("%d\n",a[i][j]);
    } 
     scanf("%d",a[i][j]);
    return 0; 
} 
