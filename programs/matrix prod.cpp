#include<stdio.h>
#include<conio.h>
int main()
{ int A[3][3],B[3][3],i,j,C[3][3],k;
   printf("enter the matrix A\n");  
  for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
 {scanf("%d",&A[i][j]);

}

    printf("\n");
}
 printf("enter the matrix B\n");     
  for(k=0;k<3;k++)
  { for(j=0;j<3;j++)
  { scanf("%d",&B[k][j]);

}

     printf("\n");
}
printf("the product of 2 matrices is");
for(i=0;i<3;i++)  
{  printf("\n");
   for(j=0;j<3;j++)
{  C[i][j]=0;
  for(k=0;k<3;k++)
C[i][j]=C[i][j]+A[i][k]*B[k][j];
printf(" %d",C[i][j]);
}
}

getch();
}

          



