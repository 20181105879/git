#include <stdio.h>
#include <stdlib.h>
struct node 
	{
		int data;
		struct node * next;
	} ;
typedef struct node * nodePtr;
int main()
{
	nodePtr head,t,p,newhead;
	int i,j,n;
	head=(struct node *) malloc(sizeof(struct node));

	head->next=NULL;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   t=(struct node *) malloc(sizeof(struct node));
	   //scanf("%d",&t->data);
	   scanf("%d",&j);	

       t->next=head;
       head=t;
	}
	

    p=head;
	while(p!=NULL)
	{
		printf("%d \n",p->data);
		p=p->next;
	}
	
	return 0;
}
