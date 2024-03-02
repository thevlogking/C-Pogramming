#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,l=0,p=0;
	char a[10], b[10];
	puts("Enter on string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	i=0;
	for(j=l-1;j>=0;j--)
	{
		b[p]=a[j];
		p++;
	}
	printf("Reverse string is: ");
	puts(b);
	return 0;
}
