#include<stdio.h>
int countArray(int arr[], int n) 
{ 
    int count = 0; 
    for (int i=0; i<n; i++) 
	{ 
      for (int j=i+1; j<n; j++)  
        {    
         if (arr[i] % arr[j] == 0 ||arr[j] % arr[i] == 0) { 
               count++; 
           }
        }
    }
    return count; 
} 
int main() 
{ 
    int a[] = {1,2,3}; 
    int n = sizeof(a) / sizeof(a[0]); 
    int b=countArray(a,n);
    printf("%d",b);
    scanf("%d",&b);
} 
