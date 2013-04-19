#include<stdio.h>
#include<conio.h>
 
struct emp
   { int empno;
      char name[20];
      float pay;
      char desig[20];
      }ob1;
int main()
{
printf("enter the employee no.");
scanf("%d",&ob1.empno);
printf("enter the name");
gets(ob1.name);
printf("\nenter his pay");
scanf("%f",&ob1.pay);
printf("enter the designation");
for(int i=0;i<='\0';i++)
{scanf("%c",&ob1.desig[i]);
}
getch();
}    
   
      
