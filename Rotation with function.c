#include<stdio.h>

int circularArrayRotation(int a[],int n,int k) 
{
        while(k!=0)   //k is number of rotation
        {
            int end=a[n-1];  // n is the size of the array and a is the array
            for(int i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=end;
            k--;
        }
}
int main()
{
	int p[]={1,2,3,4,5};
	circularArrayRotation(p,5,3);
	for(int i=0;i<5;i++)
	printf("%d\t",p[i]);
}
