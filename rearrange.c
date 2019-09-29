#include<stdio.h>

void rearrangeArr(int arr[],int n)
{
	int evenpos=n/2;
	int oddpos=n-evenpos;
	int temp;
	int temparr[n];
	for (int i = 0; i < n; i++) 
       { temparr[i] = arr[i];} 
       for(int i=0;i<n;i++)
       {
       	 for(int j=i+1;j<n;j++)
       	 {
       	 	if(temparr[i]>temparr[j])
       	 	{
       	 		temp=temparr[i];
       	 		temparr[i]=temparr[j];
       	 		temparr[j]=temp;
				}
			}
	   }
	   int j=oddpos-1;
	   for (int i = 0; i < n; i += 2)
	    { 
            arr[i] = temparr[j]; 
            j--; 
        } 
  
    j = oddpos; 
    for (int i = 1; i < n; i += 2) { 
        arr[i] = temparr[j]; 
        j++; 
    } 
    for (int i = 0; i < n; i++) 
        {printf("%d, ",arr[i]);}
}
int main()
{
   int arr[7];
   int a;
   int total=sizeof(arr)/sizeof(int);
   for(int i=0;i<total;i++)
   {
   	  scanf("%d",&arr[i]);
   }	
	   rearrangeArr(arr,total);
		scanf("%d",&a);	   
	   return 0;
}

Input:-1,2,3,4,5,6,7
output:-4,5,3,6,2,7,1

Input:-1,2,1,4,5,6,8,8
output:-4,5,2,6,1,8,1,8
