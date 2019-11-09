#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   int arr[6][6]={{1,1,1,0,0,0},
{0,1,0,0,0,0},
{1,1,1,0,0,0},
{0,0,2,4,4,0},
{0,0,0,2,0,0},
{0,0,1,2,4,0}};
   int i,j,sum[10];
   int k,max=0;
   /*for(i=0;i<6;i++)
   {
       for(j=0;j<6;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }*/
   int idx=0,mid=1;
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           sum[idx++]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           mid+=2;
       }
   }
   max=sum[0];
      for(i=1;i<idx;i++)
      {
          if(max<sum[i])
          {
              max=sum[i];
          }
      } 
      printf("%d",max);
   }
 


