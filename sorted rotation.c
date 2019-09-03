#include<stdio.h>

int search(int arr[],int l, int h,int key)
{
	if(l>h)
	{
		return -1;
	}
	int mid=(l+h)/2;
	if(arr[mid]==key)
	return mid;
	if(arr[l]<=arr[mid])
	{
		if(key>=arr[l]&&key<=arr[mid])
		{
			return search(arr,mid+1,h,key);
		}else
		{
			return search(arr,mid+1,h,key);
		}
   }
   if(key>=arr[mid]&&key<=arr[h])
		{
			return search(arr,mid+1,h,key);
		}
		else
		{
			return search(arr,l,mid-1,key);
		}	
}
int main()
{
	int arr[10],n,key=3;
	int p,i;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=search(arr,0,n-1,key);
	if(p!=-1)
	{
    	printf("index=%d",p);
    }
    else
    {
    	printf("Not found");
	}


}
