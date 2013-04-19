#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int n,a,b,c,d=0,f=0,g,h=0,power=0,sum=0;
 printf("conversions: \n 1.decimal to binary \n 2.binary to decimal \n enter your choice:");
scanf("%d",&n);
switch(n)
{ case 1:printf("enter the decimal no.");
         scanf("%d",&a);
         while(a)
        { b=a/2;
         c=a%2;
         c=d*10+c;
         d=c;
         a=b;
         
         }
         while(c)
         {f=c%10;
         g=c/10;
         f=(h*10)+f;
         h=f;
         c=g;
         }
        printf("%d",f);
        break;
case 2:printf("enter the binary no.");
       scanf("%d",&a);
       while(a>=1)
       {   n=a%10;
           c=n*pow(2,power);
           sum+=c;
           a=a/10;
           power++;
       }
       printf("the converted decimal no. is:%d",sum);
       break;
default:printf("wrong choice");
        break;
        
}

getch();
}         

         
          

 
