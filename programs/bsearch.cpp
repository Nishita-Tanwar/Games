#include<stdio.h>
#include<conio.h>
int binarysrch(int a[],int no,int n)                     /*binary search*/
{   int i,beg=0,end=no-1,mid;             
    while(beg<=end)
    {    mid=(beg+end)/2;
         if(n==a[mid]) return mid;
         else if(n>a[mid])
         beg=mid+1;
         else end=beg-1;
     }
     return -1;                  /*control will reach here only if element is not found*/     
}
int main()
{   int a[10],no,n,index,i;
    printf("enter the no. of elements u wana enter in the array\t");
    scanf("%d",&no);
    printf("enter the elements\n");
    for(i=0;i<no;i++)
    {   scanf("\n%d",&a[i]);
    }
    printf("enter the element to be searched for\t");
    scanf("%d",&n);
    index=binarysrch(a,no,n);
    if(index==-1)
    printf("element not found");
    else 
    printf("element found at position %d",index);
    getch();
}
