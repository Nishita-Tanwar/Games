#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],largest;
 for(int i=0;i<10;i++)
 {  printf("enter %dth number",i );
    scanf("%d",&a[i]);
}
 largest=a[0];
 for(int i=1;i<10;i++)
 {
   if(a[i]>largest)
    largest=a[i];
}
printf("the largest no. is %d",largest);
getch();
}
    
