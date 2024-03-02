#include<stdio.h>
void String_JOIN(char [],char []);
int main()
{
char a[20],b[20];
int len;
printf("\nEnter First string: ");
gets(a);
printf("\nEnter Second string: ");
gets(b);
String_JOIN(a,b);
 
 return(0);
}
void String_JOIN(char a[],char b[])
{
char c[40];
int i,j;
for(i=0;a[i]!='\0';i++)
{
c[i]=a[i];
}
j=0;
while(b[j]!='\0')
{
c[i]=b[j];
j++;
i++;
}
c[i]='\0';
printf("\nConcatenate string is = ");
puts(c);
}

