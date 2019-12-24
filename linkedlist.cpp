#include<malloc.h>
#include<stdio.h>
struct linkedlist
{
	int info;
	struct linkedlist *next;
}*start,*nxt;
int main()
{
	start=NULL;
	int choice=1;
	while(choice==1)
	{
		if(start==NULL)
		{
			start=(struct linkedlist *)malloc(sizeof(linkedlist));
			scanf("%d",&start->info);
			nxt=start;
		}
		else
		{
			start->next=(struct linkedlist *)malloc(sizeof(linkedlist));
			start=start->next;
			scanf("%d",&start->info);
		}
		start->next=NULL;
		printf("Enter 1 to continue.....");
		scanf("%d",&choice);	
	}
	start=nxt;
	while(start!=NULL)
	{ 
		printf("%d ",start->info);
		for(int i=1;i<=2;i++){
		start=start->next;}
	}
	scanf("%d",&choice);
}
