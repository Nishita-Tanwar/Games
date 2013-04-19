#include<stdio.h>
#include<conio.h>
#define MAXQUEUE 100
struct queue
{
int items[MAXQUEUE];
int front,rear;
};

int empty(struct queue *pq)
{
return ((pq->front==pq->rear)?1:0);
}
int remove(struct queue *pq)
{
if(empty(pq))
{
printf("queue underflow");

}
if(pq->front==MAXQUEUE-1)
pq->front=0;
else
(pq->front)++;
return (pq->items[pq->front]);
}
void insert(struct queue *pq,int x)
{
if(pq->rear==MAXQUEUE-1)
pq->rear=0;
else
(pq->rear)++;
if(pq->rear==pq->front)
{
printf("queue overflow");

}
pq->items[pq->rear]=x;
return;
}
void display(struct queue *pq)
{
int i;

printf("\n\nqueue is:");
for(i=0;i<=(pq->front);i++)
{
printf("\n\n %d",pq->items[i]);
}
}
int main()
{
struct queue q;
q.front=q.rear=MAXQUEUE-1;
int ele,ch;
do
{
printf("\n\nenter operation on queue\n\n\t1.insert\t2.remove\t3.display");
printf("\n\nenter choice(1-3):");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n\nenter item to be inserted:");
scanf("%d",&ele);
insert(&q,ele);
break;
case 2:remove(&q);
break;
case 3:display(&q);
break;
default:printf("\n\nending");
getch();
}
}while(ch>=1&&ch<=3);
return 0;
}

