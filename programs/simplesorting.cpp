#include<stdio.h>
#include<conio.h>
int main()
{  int  no,i,j,a[20],k,temp;
   printf("how many elements you want to enter in the array:\n");
                scanf("%d",&no);
                if(no>20)
                {   while(no>20)
                     {   printf("the no. should be less than 20\n");
                         printf("enter the no. again:");
                         scanf("%d",&no);
                     }
                }
                printf("enter the elements:");
                for(i=0;i<no;i++)
                {   scanf("%d",&a[i]);
                }
    for(i=0;i<no;i++)
   {   for(j=0;j<=i;j++)
        {    for(j=0;j<(no-i)-1;j++)
             {   if(a[j]>a[j+1])
                {   temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                 }
             }
         }
         printf("\narray after pass %d is:",i+1);
         for(j=0;j<no;j++)
         {   printf("%d,",a[j]);
         }
   }
   getch();
}
