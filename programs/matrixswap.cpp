#include<stdio.h>
#include<conio.h>
int main()
{   int A[3][3],B[3][3],i,j,temp[3][3];
    printf("enter the matrix A\n");  
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {  scanf("%d",&A[i][j]);

        }

        printf("\n");
    }
    printf("enter the matrix B\n");     
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
         scanf("%d",B[i][j]);


    printf("\n");
    }
    for(i=0;i<3;i++)
       {   for(j=0;j<3;j++)
           {   temp[i][j]=A[i][j];
            A[i][j]=B[i][j]; 
             B[i][j]=temp[i][j];
            
           
           }
       }
  
    printf("after swapping\n the matrix A is:\n");
    for(i=0;i<3;i++)
       {   for(j=0;j<3;j++)
           {   printf("%d ",A[i][j]);
           }
           printf("\n");
       }
    printf("\nand the matrix B is:\n");
    
    for(i=0;i<3;i++)
       {   for(j=0;j<3;j++)
           {   printf("%d",B[i][j]);
           }
           printf("\n");
       }
    getch();
}
         
       
       
    
    
