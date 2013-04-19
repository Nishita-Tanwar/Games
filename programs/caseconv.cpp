#include<stdio.h>
#include<conio.h>
int main()
{   int n,i,size;
    char str1[20],str2[20];
    char *p1=str1,*p2=str2,s;
    printf("case conversions: \n 1.uppercase to lowercase \n 2.lowercase to uppercase\n");
    printf("enter your choice: ");
    scanf("%d",&n);
    switch(n)
            {   case 1: printf("enter the size of the uppercase string:");
                        scanf("%d",&size);
                        printf("enter the uppercase string: ");
                        scanf("%s",str1);
                        printf("\nthe entered string is: ");
                        printf("%s",str1);
                        printf("\n the converted string is: ");
                        for(i=0;i<size;i++)
                        {   s=int(*(p1+i))+32;
                            printf("%c",s);
                        }
                        break;
          
          
          
          
                case 2: printf("enter the size of the lowercase string:");
                        scanf("%d",&size);
                        printf("enter the lowercase string:");
                        scanf("%s",&str1);
                        printf("\nthe entered string is: ");
                        printf("%s",str1);
                        printf("\n the converted string is: ");
                        for(i=0;i<size;i++)
                        {   s=int(*(p1+i))-32;
                            printf("%c",s);
                        }
                        break;
               default: printf("wrong choice!try again");
          }
          
    getch();
}

