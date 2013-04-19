#include<stdio.h>
#include<conio.h>
void inssort(int[],int);
int main()
{
    int T,N,ITEM,AR[100000],i;
    T<=5;
    AR[i]<=1000000;
    printf("how many test cases u want to enter?");
    scanf("%d",&T);
    for(int m=0;m<=T;m++)
    {
       printf( "how many elements do u want to enter?");
      scanf("%d",&N);
         printf("\n enter array elements");
        for(i=1;i<=N;i++)
           scanf("%d",&AR[i]) ;
        inssort(AR,N);
    }
    getch();
}
void inssort(int AR[],int size)
{
    int temp,j,count=0;
    AR[0]=INT_MIN;
    for( int i=1;i<=size;i++)
    {
        temp=AR[i] ;
        j=i-1;
        while(temp<AR[j])
        {
            AR[j+1]=AR[j];
            j-- ;
            count++ ;
            printf( "\n\n no of swaps \n %d",count);
        }
        AR[j+1]=temp;
    }
}
