#include<stdio.h>
#include<malloc.h>
struct linkedlist
{
	int info;
	struct linkedlist *next;
}*start,*nxt;
struct linkedlist *createNode(struct linkedlist *start,int info)
{
	if(start==NULL)
	{
		start=(struct linkedlist *)malloc(sizeof(linkedlist));
		start->info=info;
		start->next=NULL;
		//nxt=start;
	}
	else
	{
		start->next=createNode(start->next,info);
	}
	return start;
}
void printList(struct linkedlist *start)
{
	if(start->next!=NULL)
	{ 
		printList(start->next);
	}
		printf("%d ",start->info);	
}
int main()
{
	start=NULL;
	int info;
	for(int i=0;i<4;i++){
		scanf("%d",&info);
		start=createNode(start,info);
		if(i==0)
		{
			nxt=start;
		}
	}
	printList(nxt);
	scanf("%d",&info);
}
