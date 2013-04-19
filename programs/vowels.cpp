#include<stdio.h>
#include<conio.h>
int main()
{ int n,i,count=0;
char string[50];
printf("enter the no. of letters to be entered in the string:");
scanf("%d",&n);
printf("enter the string:");
for(i=0;i<=n;i++)
{ scanf("%c",&string[i]);
}

for(i=0;i<=n;i++)
{ if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U')
 count+=1;
}
printf("the no. of vowels in the string is %d",count);
getch();
}
