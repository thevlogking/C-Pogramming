#include <stdio.h>
int main()
{

int a[10],n,i,j;
printf("Enter the length of the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter elements on array: ");
	scanf ("%d", &a[i]);
}
for (i=0;i<n;i++)
{
	printf("%d\t", a[i]);
}
return 0;
}
