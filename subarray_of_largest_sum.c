Write an efficient program to find the sum of contiguous subarray within
a one-dimensional array of numbers which has the largest sum.


#include<stdio.h>
int subarrayMax(int arr[], int n)
{
	int sum=0,max=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(sum<0)
		{
			sum=0;
		}
		else if(max<sum)
		{
			max=sum;
		}
	}
	return max;
}
int main()
{
     int arr[] = { -2,-3,4,-1,-2,1,5,-3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
     int a=subarrayMax(arr,n);
    printf("%d",a);
    scanf("%d",&a);
}
