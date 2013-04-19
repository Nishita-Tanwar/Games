#include<stdio.h>
#include<conio.h>
int main()
{   int a,b,i,hcf;
    printf("enter the 2 numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a/2||i<=b/2;i++)
    {   if((a%i)==0&&(b%i)==0)
        hcf=i;
    }
    printf("the H.C.F of given numbers is:%d",hcf);
    getch();
}
    
