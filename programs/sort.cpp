#include<stdio.h>
#include<conio.h>
int main()
{    int ch,no,i,a[20],j,k,small,temp,pos;
     printf("TYPES OF SORTING:\n1.selection sort\n2.bubble sort\n3.insertion sort\n");
                printf("enter your choice:");
                scanf("%d",&ch);
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
                switch(ch)
                {    case 1:for(i=0;i<no;i++)
                            {   small=a[i];
                                for(j=i+1;j<no;j++)
                                {   if(a[j]<small)
                                    {   small=a[j];
                                        pos=j;
                                    }
                                } 
                                temp=a[i];
                                a[i]=a[pos];
                                a[pos]=temp;
                                printf("\narray after pass %d is:",i+1);
                                for(j=0;j<no;j++)
                                {   printf("%d,",a[j]);
                                }
                                                             
                            } 
                            break;
                     case 2:for(i=0;i<no;i++)
                               {    for(j=0;j<(no-i)-1;j++)
                                   {   if(a[j]>a[j+1])
                                       {   temp=a[j];
                                           a[j]=a[j+1];
                                           a[j+1]=temp;
                                       }
                                   }
                               printf("\narray after pass %d is:",i+1);
                               for(j=0;j<no;j++)
                                {   printf("%d,",a[j]);
                                }
                               }
                            break;
                     case 3:for(i=0;i<no;i++)
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
                            break;
                     default:printf("wrong choice");
                             break;
                }     
getch();
}
