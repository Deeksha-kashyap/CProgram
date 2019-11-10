#include<stdio.h>
#define R 4
#define C 4

void rotation(int arr[R][C], int m, int n)
{
	int row=0,col=0,prev,curr;
	while(row<m && col<n)
	{
		if(row+1==m || col+1==n)
		break;
		prev=arr[row+1][col];
		for(int i=col;i<n;i++)
		{
			curr=arr[row][i];
			arr[row][i]=prev;
			prev=curr;
		}
		row++;
		for(int i=row;i<m;i++)
		{
			curr=arr[i][n-1];
			arr[i][n-1]=prev;
			prev=curr;
		}
		n--;
		if(row<m)
		{
			for(int i=n-1;i>=col;i--)
			{
				curr=arr[m-1][i];
				arr[m-1][i]=prev;
				prev=curr;
			}
		}
		m--;
		if(col<n)
		{
			for(int i=m-1;i>=row;i--)
			{
				curr=arr[i][col];
				arr[i][col]=prev;
				prev=curr;
			}
		}
		col++;
	}
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}
	scanf("%d",&arr);
}
int main()
{
	int arr[R][C]={ {1,  2,  3,  4}, 
                    {5,  6,  7,  8}, 
                    {9,  10, 11, 12}, 
                    {13, 14, 15, 16}  }; 
    rotation(arr,R,C);
}
