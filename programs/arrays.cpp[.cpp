#include<stdio.h>
#include<conio.h>
int main()
{    int n,no,i,a[20],ele,k,flag=0,no2,j,b[20],confirm=0,count=0,c[40];
     long double wait=0;
     printf("OPERATIONS ON ARRAYS\n");
     printf("1. INSERTION \n 2.DELETION \n 3.MERGING \n");
     printf("enter the desired operation(1-6):");
     scanf("%d",&n);
     switch(n)
     {    case 1:printf("\n 1.INSERTION IN UNSORTED ARRAY \n 2. INSERTION IN SORTED ARRAY \n");
                 printf("enter your choice(1 or 2)");
                 int ch;
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
                 for(i=0;i<no;i++)
                      {      if(a[i]<=a[i+1])
                             continue;
                             else
                             count+=1;
                       }
                 if(count==0||count==(no-1))
                 {    printf("the entered array is:");
                      for(i=0;i<no;i++)
                      {   printf("%d,",a[i]);
                      }
                      printf("enter the element to be inserted:");
                      scanf("%d",&ele);
                      if(ch==1)
                      {   a[no]=ele;
                          printf("the new array is:");
                          for(i=0;i<=no;i++)
                          {    printf("%d,",a[i]);
                          }
                      }
                      else if(ch==2)
                      {        for(i=0;i<no;i++)
                               {   if(ele<a[i])
                                   {    k=i;
                                        for(i=no;i>=k;i--)
                                        {    a[i]=a[i-1];
                                        }
                                        a[k]=ele;
                                        break;
                                   }
                               }
                               printf("the new array is:");
                               for(i=0;i<=no;i++)
                               {   printf("%d,",a[i]);
                               }
                      }  
                      else printf("wrong choice");  
                 } 
                 else
                 {    printf("the entered array is not a sorted array,try method 1 for this");
                 }
                 break;
                     
         case 2: printf("how many elements you want to enter in the array:\n");
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
                 printf("the entered array is:");
                 for(i=0;i<no;i++)
                 {   printf("%d,",a[i]);
                 }
                 printf("\nenter the element to be deleted:");
                 scanf("%d",&ele);
                 printf("\nsearching for the element in the array.");
                 while(++wait<=100000000.0)
                 ;
                 printf(".\n");
                 for(i=0;i<no;i++)
                 {   if(ele==a[i])
                     {   printf("element found at position: %d \n",i);
                         k=i;
                         flag=1;
                         break;
                     }
                 }
                 if(flag==0)
                 {   printf("\nelement couldn't be found!deletion can't be done");
                 }
                 else 
                 {   printf("\ndeletion in progress."); 
                     while(++wait<=500000000.0)
                     ;
                     printf(".");
                     for(i=k;i<no;i++)
                     {    a[i]=a[i+1];
                     }
                     printf("\nthe new array formed after deletion is:");
                     for(i=0;i<(no-1);i++)
                     {   printf("%d",a[i]);
                     }
                 }
                 break;
                 
         case 3: printf("\n 1.MERGING OF 2 UNSORETD ARRAYS \n 2.MERGING OF 2 SORTED ARRAYS ");
                 printf("\nenter your choice(1 or 2)");
                 scanf("%d",&ch);
                 if(ch==1)
                 {    printf("\nhow many elements you want to enter in the first array:");
                      scanf("%d",&no);
                      if(no>20)
                      {   while(no>20)
                          {   printf("the no. should be less than 20\n");
                              printf("enter the no. again:");
                              scanf("%d",&no);
                          }
                      }
                      printf("enter the elements of first array:");
                      for(i=0;i<no;i++)
                     {   scanf("%d",&a[i]);
                     }
                     printf("the entered first array is:");
                     for(i=0;i<no;i++)
                     {   printf("%d",a[i]);
                     }
                     printf("\n\nhow many elements you want to enter in the second array:");
                     scanf("%d",&no2);
                     if(no>20)
                     {   while(no>20)
                         {   printf("the no. should be less than 20\n");
                             printf("enter the no. again:");
                             scanf("%d",&no);
                          }
                     }
                     printf("enter the elements of second array:");
                     for(i=0;i<no2;i++)
                     {   scanf("%d",&b[i]);
                     }
                     printf("the entered second array is:");
                     for(i=0;i<no2;i++)
                     {   printf("%d,",b[i]);
                     }
                     for(i=0;i<no;i++)
                     {   c[i]=a[i];
                     }
                     for(i=0;i<no2;i++)
                     {   c[no+i]=b[i];
                     }
                     printf("\nthe merged array is:");
                     for(i=0;i<(no+no2);i++)
                     {   printf("%d,",c[i]);
                     }
                 }
                 else if(ch==2)
                 {    int cho;
                      printf("\n1.both the arrays in ascending order\n2.both the arrays in descending order\n3.first array is in ascending order and second in descending order\n4.first array is in descending order and second is in ascending order\n");
                      printf("enter your choice:");
                      scanf("%d",&cho);
                      printf("\nhow many elements you want to enter in the first array:");
                                  scanf("%d",&no);
                                  if(no>20)
                                  {   while(no>20)
                                      {   printf("the no. should be less than 20\n");
                                          printf("enter the no. again:");
                                          scanf("%d",&no);
                                      }
                                  }
                                  printf("enter the elements of first array:");
                                  for(i=0;i<no;i++)
                                  {   scanf("%d",&a[i]);
                                  }
                                  printf("\n\nhow many elements you want to enter in the second array:");
                                  scanf("%d",&no2);
                                  if(no>20)
                                  {   while(no>20)
                                     {   printf("the no. should be less than 20\n");
                                         printf("enter the no. again:");
                                         scanf("%d",&no);
                                     }
                                  }
                                  printf("enter the elements of second array:");
                                  for(i=0;i<no2;i++)
                                  {   scanf("%d",&b[i]);
                                  }
                      switch(cho)
                      {    case 1:for(i=0,j=0,k=0;i<no&&j<no2;)
                                  {   if(a[i]<=b[j])
                                      c[k++]=a[i++];
                                      else
                                      c[k++]=b[j++];
                                  }
                                  if(i<no)
                                  {   while(i<no)
                                      c[k++]=a[i++];
                                  }
                                  else
                                  {   while(j<no2)
                                      c[k++]=b[j++];
                                  }
                                  printf("\nthe new array after merging is:\n");
                                  for(k=0;k<(no+no2);k++)
                                  {    printf("%d,",c[k]);
                                  }
                                  break;
                           case 2:for(i=no-1,j=no2-1,k=0;i>=0&&j>=0;)
                                  {   if(a[i]<=b[j])
                                      c[k++]=a[i--];
                                      else
                                      c[k++]=b[j--];
                                  }
                                  if(i>=0)
                                  {   while(i>=0)
                                      c[k++]=a[i--];
                                  }
                                  else
                                  {   while(j>=0)
                                      c[k++]=b[j--];
                                  }
                                  printf("\nthe new array after merging is:\n");
                                  for(k=0;k<(no+no2);k++)
                                  {    printf("%d,",c[k]);
                                  }  
                                  break;
                           case 3:for(i=0,j=no2-1,k=0;i<no&&j>=0;)
                                  {   if(a[i]<=b[j])
                                      c[k++]=a[i++];
                                      else
                                      c[k++]=b[j--];
                                  }
                                  if(i<no)
                                  {   while(i<no)
                                      c[k++]=a[i++];
                                  }
                                  else
                                  {   while(j>=0)
                                      c[k++]=b[j--];
                                  }
                                  printf("\nthe new array after merging is:\n");
                                  for(k=0;k<(no+no2);k++)
                                  {    printf("%d,",c[k]);
                                  }
                                  break;
                           case 4:for(i=no-1,j=0,k=0;i>=0&&j<no2;)
                                  {   if(a[i]<=b[j])
                                      c[k++]=a[i--];
                                      else
                                      
                                      c[k++]=b[j++];
                                  }
                                  if(i>=0)
                                  {   while(i>=0)
                                      c[k++]=a[i--];
                                  }
                                  else
                                  {   while(j<no2)
                                      c[k++]=b[j++];
                                  }
                                  printf("\nthe new array after merging is:\n");
                                  for(k=0;k<(no+no2);k++)
                                  {    printf("%d,",c[k]);
                                  }
                                  break;
                           default:printf("wrong choice");
                                   break;
                      }
                 }
                 else printf("wrong choice");
                 break;
        default:printf("wrong choice");
                break;
         }             
        getch();
}


                     
     
                     
                            
                     
                 
                     
                 
                       
                           
                 
