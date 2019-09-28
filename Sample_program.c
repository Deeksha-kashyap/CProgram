3 greatest number sum without using variables.....
example:-  5,9,6,1,3,10,2,50,0,4
output:- m1=50,m2=10,m3=9
         sum=69

#include<stdio.h>

int main()
{
	int n,m1=-1,m2=-1,m3=-1,sum;
	printf("Enter the number\n");
	for(int i=1;i<=10;i++)
	{
	scanf("%d",&n);
	if(n>m1)
	{
		m3=m2;
		m2=m1;
		m1=n;
	}
	else if(n>m2)
	{
	m3=m2;
	m2=n;
	}
	else if(n>m3)
	{
		m3=n;
	}
}
sum=m1+m2+m3;
printf("Sum=%d",sum);
scanf("%d",&n);
}
