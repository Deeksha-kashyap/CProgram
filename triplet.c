#include<stdio.h>

int Triple(int arr[], int n,int sum)
{
	int l,r,i,j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==sum)
				{
					printf("Triplet is %d, %d, %d",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	return 1;
}
int main()
{
	int arr[] = { 1, 4, 45, 6, 10, 8 }; 
    int sum = 22; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    Triple(arr, n, sum); 
    return 0; 
}
