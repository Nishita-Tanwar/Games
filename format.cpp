#include<stdio.h>
#include<conio.h>
int main()
{
     double r1;
     int i1,i2;
     printf("program for different formatting options\n");
     printf("enter real no and 2 integers\n");
     scanf("%f%d%d",&r1,&i1,&i2);
     printf("input      format output\n");
     printf("r1    lf %lf\n",r1);
     printf("r1    10.2lf   %10.2lf\n",r1);
     printf("r1     le    %le\n",r1);
     printf("r1     0.2le   %0.2LE\n",r1);
     printf("i1    d        %d\n",i1);
     printf("i1    o        %o\n",i1);
     printf("i1    #o       %#o\n",i1);
     printf("i1    x       %x\n",i1);
     printf("i1     X      %X\n",i1);
     printf("i1     #X      %#X\n",i1);
     getch();
     }
