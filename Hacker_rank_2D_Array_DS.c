#include <stdio.h>

int main()
{
   int arr[6][6];
   int i,j,sum[5],sum1[5],sum2[5];
   int k,max=0,temp;
   for(i=0;i<6;i++)
   {
       for(j=0;j<6;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(i=0;i<4;i++)
   {
       for(j=0;j<=4;j++)
       {
           sum[j]=arr[i][j]+arr[i][j+1]+arr[i][j+2];
       }
       for(j=0;j<=4;j++)
       {
           sum1[j]=arr[i+1][j+1];
       }
       for(j=0;j<=4;j++)
       {
           sum2[j]=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
       }
       for(k=0;k<5;k++)
       {
           temp=sum[k]+sum1[k]+sum2[k];
           if(max<temp)
           {
               max=temp;
           }
           else
           {
               temp=temp;
           }
       }
   }
       printf("%d",max);   
   return 0;
}
