#include<stdio.h>
int main()
{
   int arr[3][3]={{0,0,1},
                {1,1,0},
				{0,0,1}};
		bool h=false,v=false;
		int i,j,k;
	for(i=0,k=2;i<3/2;i++,k--)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==arr[k][j])
			{
				h=true;
				break;
			}
		}
	}
	for(i=0,k=2;i<3/2;i++,k--)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]!=arr[k][j])
			{
				v=true;
				break;
			}
		}
	}
	if(h && v)
	{
		printf("Both");
	}
	else if(h && !v)
	{
		printf("horizontal");
	}
	else if(v && !h)
	{
		printf("vertical");
	}
	else
	{
		printf("No");
	}
	scanf("%d",&arr);
	return 0;	
}
