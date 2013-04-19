#include<iostream.h>
#include<conio.h>
void input(int A[],int n)
{
for(int i=0;i<n;i++)
{
cout<<"enter the "<<i+1<<"th element:";
cin>>A[i];
}}
void display(int A[],int n)
{
for(int i=0;i<n;i++)
cout<<A[i]<<endl;
}
void ssort(int A[],int n)
{
int temp,small;
for(int i=0;i<n-1;i++)
{
small=i;
for(int j=i+1;j<n;j++)
{
if(A[j]<A[small])
small=j;
if(small!=i)
{
temp=A[i];
A[i]=A[small];
A[small]=temp;
}}}}
int main()
{
int arr[10],m;
do
{
cout<<"enter no of elements to be sorted:";
cin>>m;
}while(m>10);
input(arr,m);
ssort(arr,m);
cout<<"sorted elements are:"<<endl;
display(arr,m);
getch();
return 0;
}  
