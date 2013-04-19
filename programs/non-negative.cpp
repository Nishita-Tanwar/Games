#include<stdio.h>
#include<conio.h>
int main()
{    int a[20],n,i,sum=0;
     printf("enter the no. of numbers you want to add:");
     scanf("%d",&n);
     printf("enter the integers");
     for(i=0;i<n;i++)
     {    scanf("%d",&a[i]);
     }
     printf("the sum of non negative integers is:");
     for(i=0;i<n;i++)
     {    if(a[i]>=0)
          sum+=a[i];
     }
     printf("%d",sum);
     getch();
}       
