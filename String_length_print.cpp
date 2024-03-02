#include <stdio.h>
#include<string.h>
int main()
{
	int i,l=0,d;
	char a[10];
	puts("Enter string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	d=l;
	printf("The length of the string is: %d", d);
return 0;
}  
