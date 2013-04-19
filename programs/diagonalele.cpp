#include<stdio.h>
#include<conio.h>
int main()
{  int A[3][3],i,j;
   printf("enter the matrix A\n");  
   for(i=0;i<3;i++)
   {  for(j=0;j<3;j++)
      {  scanf("%d",&A[i][j]);

      }

      printf("\n");
   }
   printf("the diagonal elements of the matrix are:");
   for(i=0;i<3;i++)                                       //to print the diagonal elements
   {   for(j=0;j<3;j++)
       {   if(i==j)
           printf("%d\n",A[i][j]);
        }
   }
getch();
}
