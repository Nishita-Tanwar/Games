#include<stdio.h>
#include<conio.h>
int main()
{ int a[10];float avg=0,sum=0;
 for(int i=0;i<10;i++)
 { printf("enter %dth number",i );
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
avg=sum/10;
printf("the sum of 10 numbers is %f and the average is %f",sum,avg);
getch();
}
  
