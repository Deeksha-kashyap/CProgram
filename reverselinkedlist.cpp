#include<malloc.h>
#include<stdio.h>
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
		nxt=start;
	}
	else
	{
		start->next=(struct linkedlist *)malloc(sizeof(linkedlist));
		start=start->next;
		start->info=info;
		start->next=NULL;
	}
	
	return start;
}
void printList(struct linkedlist *start)
{
	start=nxt;
	while(start!=NULL)
	{ 
		printf("%d ",start->info);
		start=start->next;
	}	
}
int main()
{
	start=NULL;
	int info;
	for(int i=0;i<4;i++){
		scanf("%d",&info);
		start=createNode(start,info);
	}
	//start=nxt;
	printList(start);
	scanf("%d",&info);
}
