#include<stdio.h>
#include<conio.h>
int main()
{   int A[3][3],B[3][3],i,j;
    printf("enter the matrix A\n");  
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
       {   scanf("%d",&A[i][j]);

       }

    printf("\n");
    }
    for(i=0;i<3;i++)                          //to find the transpose of the matrix
    {   for(j=0;j<3;j++)
        B[i][j]=A[j][i];
    }
    for(i=0;i<3;i++)                          //to print the transpose of the matrix
    {   for(j=0;j<3;j++)
        {   printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    getch();
}
    
