#include<bits/stdc++.h> 
using namespace std;

#define n 3
void swapElement(int arr[][n])
{
	for(int i=0;i<n;i++)
	{
		if(i!=n/2)
		{
			swap(arr[i][i],arr[i][n-i-1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}
	scanf("%d",&arr);
	
}
int main()
{
	int arr[n][n]={4, 5, 6, 
                    1, 2, 3, 
                    7, 8, 9};
	swapElement(arr);
	
}
