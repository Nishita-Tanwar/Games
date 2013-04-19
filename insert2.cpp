#include<stdio.h>
#include<conio.h>
int inssort(int[],int);
int main()
{
    int T,N,ITEM,AR[100000],i,count,m,y1,y2,y3,y4,y5;
    T<=5;
    AR[i]<=1000000;
    printf("how many test cases u want to enter?");
    scanf("%d",&T);
    for(int m=1;m<=T;m++)
    {
       printf( "\nhow many elements do u want to enter?");
      scanf("%d",&N);
         printf("\n enter array elements");
        for(i=1;i<=N;i++)
           scanf("%d",&AR[i]) ;
           }
  for(int m=1;m<=T;m++)
  {
        inssort(AR,N);
              }
    getch();
}

int inssort(int AR[],int size)
{
    int temp,j,count=0,min,y;
    min=AR[0];   
    for( int i=1;i<=size;i++)
    {
        temp=AR[i] ;
        j=i-1;
        while(temp<AR[j])
        {
            AR[j+1]=AR[j];
            j-- ;
            count++ ;
        }
        AR[j+1]=temp;
    }
 printf( " \n %d",count);
}
