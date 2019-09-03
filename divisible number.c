#include<stdio.h>

int numberDivisble(int x,int y, int m)
{
	int c=0,i;
	for(i=x;i<=y;i++)
	{
		if(i%m==0)
		c++;
	}
	return c;
}
int main()
{
	int a;
	a=numberDivisble(25,100,30);
	printf("%d",a);
}
