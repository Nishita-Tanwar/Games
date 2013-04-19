#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
      int data;
      struct node *next;
 };
void insert( struct node *pointer, int data)
{
while(pointer->next!= NULL)
{
 pointer= pointer->next;
}
pointer->next=(node*)malloc(sizeof(struct node));
pointer=pointer->next;
pointer->data=data;
pointer->next=NULL;
}
int find(struct node *pointer,int key)
{
 pointer=pointer->next;
while(pointer!=NULL)
{
if(pointer->data==key)
{
   return 1;
}
pointer=pointer->next;
}
return 0;
}
void del(struct node *pointer,int data)
{
 while(pointer->next!=NULL && (pointer->next->data!=data))
 {
   pointer=pointer->next;
 }  
 if(pointer->next==NULL)
 {
   printf("element not found");
   return ;
}
struct node *temp;
temp=pointer->next;
pointer->next=temp->next;
free(temp);
return ;
}
void print(struct node *pointer)  
{
if(pointer==NULL)
{
return ;
}
printf("%d",pointer->data);
print(pointer->next);
}
int findlen(struct node *p)
{
    int len=0;
    struct node *t;
    if(p==NULL)
     return 0;
     t=p;
     while(t!=NULL)
     {
      len++;
      t=t->next;
      }
      return(len);
}
void reverse()
{
struct node *p; struct node *q;
int j,k,i=0;
int temp;
int length=findlen(p);
while(i<length/2)
{
for(j=0;j<i;j++)
p=p->next;
for(k=0;k<length-i-1;k++)
{
q=q->next;
temp=p->data;
p->data=q->data;
q->data=temp;
i++;
}
}
}
int main()
{
struct node *start,*temp;
start=(node *)malloc(sizeof(node));
temp=start;
temp->next=NULL;
do
{
int query;
printf("enter query : 1.insert\t 2.delete \t 3.print\t 4.find\t 5.reverse");
scanf("%d",&query);
if(query==1)
{
 int data;
 scanf("%d",&data);
 insert(start,data);
}
if(query==2)
{
int data;
scanf("%d",&data);
del(start,data);
}
if(query==3)
{
printf("the list is");
print(start->next);
printf("\n");
}
if(query==4)
{
int data, status;
scanf("%d",&data);
status=find(start,data);
if(status)
{
    printf("element found");
}
else
printf("element not found");
}
if(query==5)
{
reverse();
printf("reversed list is");
print(start);
}
}while(1);
getch();
return 0;
}


                                     
 
