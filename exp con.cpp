#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 20
char stack[MAX];
int top= -1;
char pop();
void push(char item);
int pred(char symbol)
{
             switch(symbol)
             {
                           case '+':
                           case '-':return 2;
                           break;
                           case '*':
                           case '/':return 4;
                           break;
                           case '^':
                           return 6;
                           break;
                            case ')':
                            case '(':
                           case '#':return 1;
                           break;
                           };
                           }
                           int isoperator(char symbol)
                           {
                           switch(symbol)
                           { case '+':
                           case '-':return 2;
                           break;
                           case '*':
                           case '/':return 4;
                           break;
                           case '^':
                           return 6;
                           break;
                           case ')':
                           case '(':
                           case '#':return 1;
                           break;
                           default: return 0;
                            }
                           }
                          void convertip(char infix[], char postfix[])
                           {
                          int i,symbol,j=0;
                         // stack[++top] = "#";
                           for(i=0;i<strlen(infix);i++)
                         {
                         symbol=infix[i];
                         if(isoperator(symbol)== 0)
                         {
                         postfix[i]= symbol;
                          j++;
                          }
                          else 
                          {
                          if(symbol== '(' )
                          { push(symbol);
                          postfix[j]=symbol;
                          j++;
                            }
                         else
                         {
                         if(symbol== '(')
                         push(symbol);
                         }
                         }
                         else if(symbol==')')
                         {
                           while(stack[top]!='(')
                           {
                             postfix[j]=pop();
                             j++;
                             pop();
                             }
                          else
                          {
                          if(pred(symbol>pred(stack[top])
                            push(symbol);
                            else{
                            while(pred(symbol)<=pred(stack[top]))
                            {
                               postfix[j]=pop();
                               j++;
                               }
                               push(symbol);
                                 }
                                 }
                                 }
                               while(stack[top]!='#')
                               {
                                  postfix[j]=pop();
                                  j++;
                                   }
                               postfix[j]='\0';
                            }}
                                                                                           
                          int main()
                         {
                         char infix[20],postfix[20];
                          printf("enter valid infix string");
                           gets(infix);
                          convertip(infix,postfix);
                          printf("corresponding p ostfix");
                           puts(postfix);
                         getch();
                         }
                         void push(char item)
                         {
                           top++;
                           stack[top]=item;
                         }
                           char pop()
                           {
                            char a;
                           a=stack[top];
                           top--;
                           return a;
                           }
                                                                                                          
                                                                                                                                          
                                               
                                                                 
                                
                                               
