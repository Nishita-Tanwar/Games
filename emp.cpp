#include<stdio.h>
#include<conio.h> 
 struct employee
    {
           unsigned id:8;
           unsigned sex:1;
           unsigned age:7;
           };

int main()
{
  
      struct bitfield
      {
             unsigned a:5;
             unsigned b:5;
             unsigned  c:6;
             }bit;
             
             struct bitfield *ptr , bit1={1,3,3};
             ptr=&bit1;
             ptr++;
             printf("%d", *ptr);
           struct employee emp1={203,1,23};
           
           printf("%d\t%d\t%d",emp1.id,emp1.sex,emp1.age);
           getch();
           return 0;
           }
