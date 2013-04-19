#include<stdio.h>
#include<conio.h>
int main()
{   int a[10];
    int n,no,chk=0,i;
    printf("enter the no. of elements u wana enter in the array\t");
    scanf("%d",&no);
    printf("enter the elements\n");
    for(i=0;i<no;i++)
    {   scanf("\n%d",&a[i]);
    }
    printf("enter the element to be searched for\t");
    scanf("%d",&n);
    for(i=0;i<no;i++)                                 /*linear search*/
    {   if(a[i]==n)
        {     printf("element found at position %d",i);
              chk=1;
              break;
        }
   
    } 
   
    if(chk==0)
    printf("element not found");
    getch();
}
    
