#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define MAX 50
struct stack
{
       int top;
       char items[MAX];
};
 int empty(stack *ps)
{
 if((ps->top)==-1)
  return 1;
 else return 0;
}
int overflow(stack *ps)
{
if((ps->top)==MAX-1)
 return 1;
else return 0;
}
 void push(stack *ps, char ch)
{
if(overflow(ps))
cout<<"the stack is full"<<endl;
else
ps->items[++(ps->top)]=ch;
}
char pop(stack *ps)
{
if(empty(ps))
cout<<"the stack is empty"<<endl;
else
return(ps->items[(ps->top)--]);
}
char stacktop(stack *s)
{
  if(!empty(s))
  return(s->items[s->top]);
  else
 cout<<"the stack is empty"<<endl;
}
int prcd(char a,char b)
{
if((a=='*'&&b=='+')||(a=='*'&&b=='-')||(a=='/'&&b=='+')||
(a=='/'&&b=='-')||(a=='+'&&b=='-')||(a=='-'&&b=='+')||
(a=='*'&&b=='/')||(a=='/'&&b=='*'))
return 1;
 else return 0;
}
 int main()
{
char str[25];
cout<<"enter the infix expression"<<endl;
gets(str);
stack opstck;
opstck.top=-1;
int i=0;
while(str[i]!='\0')
{
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
cout<<str[i];
else
{
 while(!(empty(&opstck))&&prcd(stacktop(&opstck),str[i]))
{
cout<<pop(&opstck);
}
push(&opstck,str[i]);
}
i++;
}
while(!empty(&opstck))
{
cout<<pop(&opstck);
}
getch();
return 0;
}
                                   
