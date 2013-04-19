#include<stdio.h>
#include<conio.h>
int main()
{  int  ch,no,i,j,a[20],confirm=0;
    printf("1.selection sort\n2.bubble sort\n3.insertion sort\n");
                printf("enter your choice");
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
                {    case 1:int small,pos,temp,k;
                            for(i=0;i<no;i++)
                            {   small=a[i];
                                for(j=i+1;j<no;j++)
                                {   if(a[j]<small)
                                    {    small=a[j];
                                         pos=j;
                                         confirm=1;
                                    }
                                } 
                                if(confirm==1)
                                {   temp=a[i];
                                    a[i]=a[pos];
                                    a[pos]=temp;
                                }
                                printf("\narray after pass %d is:",i+1);
                                for(k=0;k<no;k++)
                                {   printf("%d,",a[k]);
                                }
                            }
                            
                     case 2:break;
                     case 3:break;
                }
                getch();
                }     
