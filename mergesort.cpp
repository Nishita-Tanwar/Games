#include<iostream.h>
#include<conio.h>
void merge_sort(int [],int, int);
void merge(int [],int,int,int);
int main()
{
int A[30],n;
cout<<"enter elements to be sorted:";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter the "<<i+1<<"th element:";
cin>>A[i];
}
merge_sort(A,0,n-1);
cout<<"the sorted elements are";
for(int j=0;j<n;j++)
cout<<A[j]<<endl;
return 0;
}
void merge_sort(int A[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
merge_sort(A,low,high);
merge_sort(A,low,mid);
merge_sort(A,mid+1,high);
merge(A,low,mid,high);
} }
void merge(int A[],int l,int m,int h)
{
int A1[10],A2[10];
int n1,n2;
n1=m-l+1;
n2=h-m;
for(int i=0;i<n1;i++)
A1[i]=A[l+i];
for(int j=0;j<n2;j++)
A2[j]=A[m+j+1];
int a=0, b=0;
for(int k=l;k<=h;k++)
{
if(A1[a]<=A2[b])
A[k]=A1[a++];
else
A[k]=A2[b++];
} }

