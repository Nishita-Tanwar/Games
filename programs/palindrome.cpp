#include<stdio.h>
#include<conio.h>
int main()
{char str[20];
int i,j,var=0,len;
scanf("%s",str[20]);
for(len=0;str[len]!='\0';len++); /*to find length of string*/

for(i=0,j=len-1;i<=len/2;i++,j--)
{ if(str[i]==str[j])
    var=1;
    else 
{var=0;
 }
}
if(var==1)
printf("entered string is a palindrome");
else 
printf("entered string is not a palindrome");
getch();
}
   
