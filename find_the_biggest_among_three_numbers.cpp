#include <stdio.h>
int main()
{
int a,b,c;
printf ("Enter the number a ");
scanf("%d",&a);
printf("Enter the Number b ");
scanf("%d",&b);
printf("Enter the Number c ");
scanf("%d",&c);
if ((a>b) && (a>c))
printf ("%d is greater",a);
else if ((a<b)&&(c<b))
printf ("%d is greater",b);
else
printf("%d is greater",c);
return 0;
}
