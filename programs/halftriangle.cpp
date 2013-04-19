#include<stdio.h>
#include<conio.h>
int main()
{   int a[4][4],i,j,k;
    printf("enter the 4*4 matrix:\n");
    for(i=0;i<4;i++)
    {   for(j=0;j<4;j++)
        {   scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    for(i=0;i<4;i++)
    {   for(j=0;j<i;j++)
        {   printf("  ");
        }
        for(j=j;j<4;j++)
        {   printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    for(i=0;i<4;i++)
    {   for(j=0;j<=i;j++)
        {    printf("%d ",a[i][j]);
        }
        for(j=j;j<4;j++)
        {    printf("  ");
        }
        printf("\n");
        
    }
    getch();
    
}
    
