#include<stdio.h>
#include<conio.h>
int main()
{ int num1=0,num2=1,num3,n,i;
 printf("enter the no. of numbers to be entered in the fibonacci series:");
 scanf("%d",&n);
 printf("%d,%d,",num1,num2);
 for(i=0;i<n;i++)
 { num3=num1+num2;
   num1=num2;
   num2=num3;
   printf("%d,",num3);
}
getch();
} 
 
