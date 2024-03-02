#include <stdio.h>
int main()
{

int a[20],n,i,j,min,max;
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
min=a[0],max=a[0];
for (i=1;i<n;i++)
{
	if (min>a[i])
	min=a[i];
	if (max<a[i])
	max=a[i];
}
printf ("\nThe minimum element is: %d", min);
printf ("\nThe maximum element is: %d", max);
return 0;
}
