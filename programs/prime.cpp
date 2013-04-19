#include<stdio.h>
#include<conio.h>
int main()
{ int n,flag=0;
printf("enter the no.");
scanf("%d",&n);
for(int i=2;i<=n/2;i++)
{ if(n%i==0)           
  {
              printf("it is not a prime no.");
              break;
              flag=1;
   }
   

}
if(flag==0)
printf("it is a prime no.");
getch();
}
