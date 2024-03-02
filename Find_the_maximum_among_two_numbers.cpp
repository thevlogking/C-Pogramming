#include <stdio.h>
int main()
{
int a,b;
printf ("Enter the number a ");
scanf("%d",&a);
printf("Enter the Number b ");
scanf("%d",&b);
if (a>b)
printf ("a is maximum");
else if (a<b)
printf ("b is maximum");
else
printf("Both are equal");
return 0;
}
