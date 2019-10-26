Center element of matrix equals sums of hail diagonals

#include<stdio.h>
int main()
{
	int arr[5][5]={ { 2, 9, 1, 4, -2}, 
                  { 6, 7, 2, 11, 4},  
                  { 4, 2, 9, 2, 4}, 
                  { 1, 9, 2, 4, 4}, 
                  { 0, 2, 4, 2, 5} };
	int i,j,suml1=0,suml2=0,sumr1=0,sumr2=0;
	for(i=0,j=4;i<5;i++,j--)
	{
		if(i<5/2)
		{
			suml1+=arr[i][i];
			suml2+=arr[j][i];
		}
		else if(i>5/2)
		{
			sumr1+=arr[i][i];
			sumr2+=arr[j][i];
		}
	}
	if(suml1==9 && suml2==9 && sumr1==9 && sumr2==9)
	{
		printf("center element of matrix is equal to individual sum");
	}
	else
	{
		printf("sum is not equal to individual sum");
	}
	scanf("%d",&arr[i][j]);
}
