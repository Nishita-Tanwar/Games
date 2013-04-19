#include<stdio.h>
#include<conio.h>
#include<math.h>
float area,peri;

void circle(float r)
{    printf("enter the radius of the circle:");
     scanf("%f",&r);
     area=3.14*r*r;
     peri=2*3.14*r;
     printf("the area and perimeter are %f and %f",area,peri);
}
void rect(float l,float b)
{    printf("enter the length and the breadth:\n");
     scanf("%f %f",&l,&b);
     area=l*b;
     peri=2*(l+b);
     printf("the area and perimeter are %f and %f",area,peri);
}
void triangle(float A,float B,float C)
{    printf("enter the sides of the triangle:\n");
     scanf("%f %f %f",&A,&B,&C);
     float sp;
     sp=(A+B+C)/2;
     area=pow((sp*(sp-A)*(sp-B)*(sp-C)),0.5);
     peri=A+B+C;
     printf("the area and perimeter are %f %f",area,peri);
}
void square(float s)
{    area=s*s;
     peri=4*s;
     printf("the area and perimeter are %f %f",area,peri);
}
 int main()
{    int n;
     float r,l,b,A,B,C,s;
     printf("main menu \n AREA AND PERIMETER\n  1.circle \n 2.rectangle \n 3.triangle \n 4.square \n  ENTER YOUR CHOICE:");
     scanf("%d",&n);
     switch(n)
              { case 1:circle(r);
                       break;
                case 2:rect(l,b); 
                       break;  
                case 3:triangle(A,B,C);
                       break;
                case 4:square(s);
                       break;
               default:printf("wrong choice");
                       break;
               }  
     getch();
}     
                                     
