#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
node* next;
}*top=NULL;
int empty()
{
if(top==NULL)
return 1;
else
return 0;
}
void push()
{
node *p;
p=(node *)malloc(sizeof(node));
printf("\nenter elements to be entered:");
scanf("%d",&(p->info));
p->next=top;
top=p;
}
int pop()
{
    if(empty())
    {
    printf("\nthe list is empty");
    exit(1);
}
else
{
    int x;
    struct node *p;
    p=top;
    x=p->info;
    top=top->next;
    free(p);
    return x;
}
}
void display()
{
node *temp;
temp=top;
while(temp!=NULL)
{
printf("%d",temp->info);
printf("\n");
temp=temp->next;
}
free(temp);
}
int main()
{
char ch,p;
do
{
     printf("\nMenu: \nEnter 'P' to PUSH an element into stack\nenter 'o' to pop element from stack\nenter 'd' to display stack contents\nenter 'q' to quit");
     scanf("%c",&ch);
     switch(ch)
     {
     case'P':push();
     break;
     case'o':printf("%d",pop());
     break;
     }
     }
     while(ch!='q');
     getch();
     return 0;
     }
     
