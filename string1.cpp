#include<stdio.h>
#include<conio.h>
int scan( char *input, int *words)
{
    int pos,len;
    char c;
    *words =1;
    pos=0;
    c=getche();
    while(c!=13)
    {
                if(( c==' ')&&((input[pos-1]==' ')||pos==0));
                else
                {
                    input[pos]=c;
                    pos++;
                    if(c==' ')
                    (*words)++;
                    }
                    c=getche();
                    }
                    input[pos]=0;
                    if(pos==0)
                    *word=0;
                    return pos;
                    }
                    #define MAIN
                    #ifdef MAIN
                    int main()
                    {
                        
