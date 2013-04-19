#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
struct node *left,*right;
}*start,*temp;
void insertend()
{
node* pointer;
pointer=temp;
int x;
while(pointer->right!=NULL)
{
pointer=pointer->right;
}
printf("\nenter elements to be entered:");
scanf("%d",x);
pointer->right=(node *)malloc(sizeof(node*));
pointer->info=x;
pointer=pointer->right;
pointer->right=NULL;
}
void find()
{
int key,c=0;
node *pointer;
pointer=temp;
printf("enter elements to be searched:");
scanf("%d",&key);
while(pointer!=NULL)
{
if(pointer->info==key)
{
printf("element is present in list");
c++;
}
pointer=pointer->right;}

if(c==0)
printf("\nelement is not present in list");
}
void delet()
{
int data;
node *pointer;
pointer=temp;
printf("\nenter element to be deleted:");
scanf("%d",&data);
if(pointer->info==data)
{
node *t;
t=pointer;
pointer=t->right;
free(t);
}
else
{
while(pointer->right!=NULL&&(pointer->right)->info!=data)
pointer=pointer->right;
if(pointer->right==NULL)
printf("\nelements not found");
else
{
node *t;
t=pointer->right;
pointer->right=t->right;
free(t);
}}}
void print(node *pointer)
{
if(pointer==NULL)
{
return;
}
printf("%d",pointer->info);
print(pointer->right);
}
void sortedlist()
{
node *t;
t=temp;
struct node *p,*q;
int a;
if(t->right==NULL)
printf("\nempty");
else
{
p=t;
while(p->right!=NULL)
{
q=p->right;
while(q!=NULL)
{
if(p->info>q->info)
{
a=q->info;
q->info=p->info;
p->info=a;
}
q=q->right;
}
p=p->right;
}}}
int length()
{
int c=0;
node *t;
t=temp;
if(t->right==NULL)
printf("\nempty");
else
{
while(t!=NULL)
{
c++;
t=t->right;
}
return c;
}}
void reverse()
{
node *p,*q;
int j,k,i=0;
int a;
while(i<(length())/2)
{
p=temp;
q=temp;
for(j=0;j<i;j++)
p=p->right;
for(k=0;k<length()-i-1;k++)
q=q->right;
a=p->info;
p->info=q->info;
q->info=a;
i++;
}}
void deletnode(node *p,int *px)
{
node *q,*r;
if(p==NULL)
{
printf("\n not available");
}
else
{
*px=p->info;
q=p->left;
r=p->right;
q->right=r;
r->left=q;
free(p);
}}
void insertright(node *p)
{
int x;
printf("\nenter info to be inserted to right of given node:");
scanf("%d",&x);
node *q,*r;
if(p==NULL)
printf("\nnot  available");
else
{
q=(node *)malloc(sizeof(node));
q->info=x;
r->left=q;
q->right=r;
p->right=q;
q->left=p;
}}
void insertleft(node *p)
{
int x;
printf("\nenter info to be inserted to left of given node:");
node *q,*r;
if(p==NULL)
printf("\nnot available");
else
{
q=(node *)malloc(sizeof(node));
q->info=x;
r->right=q;
q->left=r;
p->left=q;
q->right=p;
}}
int main()
{
int ch;
start=(node *)malloc(sizeof(node));
temp=start;
temp->left=NULL;
temp->right=NULL;
do
{
printf("\n menu");
printf("\n enter 1 to insert element at end of list");
printf("\n enter 2 to delete element from list");
printf("\n enter 3 to find whether element is present in list");
printf("\n enter 4 to sort list");
printf("enter 5 to reverse list");
printf("\nenter 6 to exit");
scanf("%d",&ch);
switch(ch)
{
case 1:insertend();
print(temp);
break;
case2:delet();
print(temp);
break;
case 3:find();
break;
case 4:sortedlist();
print(temp);
}
}while(ch!='6');
getch();
return 0;
}
     
