#include<stdio.h>
#include<conio.h>
long fact(long n)
{ if(n==2)
return n;
return (n*fact(n-1));
}
int main()
{long n,x;
printf("enter the no.");
scanf("%d",&n);

printf("the factorial is %d",fact(n));
getch();
}
