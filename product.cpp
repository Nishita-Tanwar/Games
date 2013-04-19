#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n;
    int i,j,k,a[i][j],b[j][k],c[i][k];
     printf("how many rows?");
    scanf("%d",&m);
     printf("how many columns?");
      scanf("%d",&n);
       printf("\n\nFirst table:\n");
         for(i=0;i<m;+i)
      {
                 for(j=0;j<n;++j)
                     scanf("%d",&a[i][j]);
                     }       
           printf("\n\nsecond table:\n");
            for(j=0;j<m;++j)
      {
                 for(k=0;k<n;++k)
                     scanf("%d",&b[j][k]);
                     }
                              c[i][k]+=a[i][j]*b[j][k];
                               printf("\n\n product of the elements:\n\n");
                                for(i=0;i<m;++m)
                                             {
                                for(k=0;k<n;++k)
                                             printf("%d",c[i][k]);
                                             printf("\n");
                                             }
                                              getch();
       }
