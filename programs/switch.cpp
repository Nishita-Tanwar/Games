#include<stdio.h>
#include<conio.h>
int main()
{   int n;
    printf("enter one no. between 1 & 7");
    scanf("%d",&n);
    switch(n)
    { case 1: printf("monday");
              break;
      case 2: printf("tuesday");
               break;
      case 3:printf("wednesday");
             break;
      case 4:printf("thursday");
             break;
      case 5:printf("friday");
             break;
      case 6:printf("saturday");
             break;
      case 7:printf("sunday");
              break;
}
getch();
}                                              
