#include<stdio.h>
#include<conio.h>
main()
{
      struct bitfield
      {
             unsigned int a;
             unsigned int b;
             unsigned int c;
             }bit;
             
             struct bitfield *ptr , bit1={1,3,3};
             ptr=&bit1;
             ptr++;
             printf("%d", *ptr);
             getch();
             }
             
