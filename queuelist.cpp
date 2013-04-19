#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
node* next;
};
struct queue
{
node* front;
node* rear;
};
int empty(struct queue *pq)
{
if(pq->front==NULL)
return 1;
else
return 0;
}
void insert(struct queue *pq)
{
node *p;
p=(node *)malloc(sizeof(node));
printf("\nenter element to be inserted in queue:");
scanf("%d",&(p->info));
p->next=NULL;
if(pq->rear==NULL)
pq->front=p;
else
(pq->rear)->next=p;
pq->rear=p;
}
int remove(struct queue *pq)
{
node *p;
int x;
if(empty(pq))
{
printf("\nThe queue is empty");
}
else
{
p=pq->front;
x=p->info;
pq->front=p->next;
if(pq->front==NULL)
pq->rear=NULL;
free(p);
return x;
}}
void display(struct queue *pq)
{
node *p;
p=pq->front;
while(p!=NULL)
{
printf("%d",p->info);
printf("\n");
p=p->next;
}
free(p);
}
int main()
{
struct queue *a;
int ch;
a=(queue *)malloc(sizeof(queue));
a->front=NULL;
a->rear=NULL;
do
{
printf("\nmenu");
printf("\nenter 1 to insert element in queue");
printf("\nenter 2 to remove element from queue");
printf("\nenter 3 to display contents of queue");
printf("\nenter 4 to quit");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(a);
display(a);
break;
case 2:printf("removed element is:");
printf("%d",remove(a));
display(a);
break;
case 3: printf("\ncontents of queue are:");
display(a);
break;
}}while(ch>=1&&ch<=3);
getch();
return 0;
}


