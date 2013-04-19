#include<stdio.h>
#include<conio.h>

int main()
{  int n,a,sum=0;
printf("enter the 5 digit no.");
scanf("%d",&n);
for(int i=0;i<5;i++)
{ a=n%10;
  sum=sum+a;
  n=n/10;
}
printf("the sum is %d",sum);
getch();
}
