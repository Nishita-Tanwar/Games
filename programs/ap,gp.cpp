#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   int g1,r,sum2,j,k;
    int a1,h,n,i,d,sum1,c,e;
    int ch;
    printf("A.P. AND G.P. SERIES:\n");
    printf("1. A.P. SERIES\n");
    printf("2. G.P. SERIES\n");
    printf("enter your choice of work(1 or 2)");
    scanf("%d",&h);
    switch(h) 
            {    case 1: printf("Enter the no. of terms you want to have in the A.P series:");
                         scanf("%d",&n);
                         printf("\n Enter the first member of A.P series: ");
                         scanf("%d",&a1);
                         printf("\nenter the common difference:");
                         scanf("%d",&d);
                         printf("What do you want? \n 3.The A.P series upto n terms \n 4.The sum of A.P series upto n terms");
                         printf("\nenter your choice:");
                         scanf("%d",&ch);
                         if(ch==3)
                         {    printf("%d,",a1);
                              for(i=1;i<n;i++)
                              {   c=i*d;
                                  printf("%d,",a1+c);
                              }
                         }    
                           else
                           {   sum1=a1;
                               for(i=1;i<n;i++)  
                               {   c=i*d;
                                   sum1+=(a1+c);
                               }
                               printf("%d",sum1);
                           }
                           break;
                  case 2: printf("Enter the no. of terms you want to have in the G.P series:");
                          scanf("%d",&n);
                          printf("\n Enter the first member of G.P series: ");
                          scanf("%d",&g1);
                          printf("enter the common difference r:");
                          scanf("%d",&r);
                          printf("What do you want? \n 3.The G.P series upto n terms \n 4.The sum of G.P series upto n terms");
                          printf("\n enter your choice:");
                          scanf("%d",&ch);
                          if(ch==3)
                          {     printf("%d,",g1);
                                for(j=1;j<n;j++)
                              {  e=pow(r,j);
                                 printf("%d,",g1*e);
                              }
                          }    
                            else
                            {   sum2=g1;
                               for(j=1;j<n;j++)  
                               {  e=pow(r,j); 
                                  sum2+=(g1*e);
                               }
                               printf("%d",sum2);
                           }
                           break;
              }
   printf("\n\n \t\t\t\t GOOD BYE!COME AGAIN");
   getch();
}
                          
                          
                           
                               
                                  
                                       
                         
    
    
