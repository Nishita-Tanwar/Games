#include<stdio.h>
#include<conio.h>
int main()
{   int n,no,no2,a,b,c;
    printf("THE BITWISE OPERATORS ARE:\n 1.BITWISE COMPLEMENT \n 2.BITWISE AND \n 3.BITWISE EXCLUSIVE OR \n 4.BITWISE INCLUSIVE OR\n");
    printf(" 5.RIGHT SHIFT AND LEFT SHIFT BITWISE OPERATORS\n");
    printf("enter your choice:");
    scanf("%d",&n);
    switch(n)
    {      case 1:printf("the bitwise complement:\n");
                  printf("enter the operand:");
                  scanf("%d",&a);
                  printf("the result is:%d",~a);
                  break;
           case 2:printf("the bitwise AND:\n");
                  printf("enter the 2 operands:");
                  scanf("%d%d",&a,&b);
                  c=a&b;
                  printf("the result is:%d",c);
                  break;
           case 3:printf("the bitwiswe EXCLUSIVE OR:\n");
                  printf("enter the 2 operands:");
                  scanf("%d%d",&a,&b);
                  c=a^b;
                  printf("the result is:%d",c);
                  break;
           case 4:printf("the bitwiswe INCLUSIVE OR:\n");
                  printf("enter the 2 operands:");
                  scanf("%d%d",&a,&b);
                  c=a|b;
                  printf("the result is:%d",c);
                  break;
           case 5:printf("\n1.the right shift operator:\n");
                  printf("enter the no.");
                  scanf("%d",&no);
                  printf("\nthe original no.is no");
                  printf("\nthe no. with right shift operator is %d\n",no>>1);
                  printf("\n2.the left shift operator:\n");
                  printf("enter the no.");
                  scanf("%d",&no2);
                  printf("\nthe original no. is no2");
                  printf("\nthe no. with left shift operator is %d",no2<<1);
                  break;
           default:printf("wrong choice,try again");
                   break;
    }
    
    getch();
}    
        
