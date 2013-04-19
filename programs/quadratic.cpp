#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   int a,b,c,d,f;
    float x1,x2,e;
    printf("the quadratic equation is of the form:apow(x,2)+bx+c\n");
    printf("enter the a,b and c for the equation:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*(a*c);
   
    if(d==0)
    {   x1=x2=-b/(2*a);
        printf("the solutions of the given equation are equal:%f and %f",x1,x2);
    }
    else  if(d>0)
          {   x1=(-b+pow(d,0.5))/(2*a); 
              x2=(-b-pow(d,0.5))/(2*a); 
              printf("the solutions of the given equation are real n distinct :%f and %f",x1,x2);
          }
    else
    {   
         e=pow(-d,0.5);
         f=2*a;
         printf("the solutions of the given equation are imaginary:\n(-%d+%fi)/%d and (-%d-%fi
         )/%d",b,e,f,b,e,f);
         
    }
    
    getch();
}
    
