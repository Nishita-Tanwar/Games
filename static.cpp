#include<stdio.h>
#include<conio.h>
int stat(void);
int Dynamic(void);
static int count=0;
main()
{
      int i;
      printf("program for use of static variables in function\n");
      printf("count is %d\n",count);
      for(i=0;i<9;i++)
      {
                      count++;
                      printf("count=%d, stat count=%d, dynamic count=%d\n",count,stat(),Dynamic());
                      }
                      getch();
                      }
                      int stat(void)
                      {
                          static int i=0;
                          return(++i);
                          }
                          int Dynamic(void)
                          {
                              int i=0;
                              return(++i);
                              }
