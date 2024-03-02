#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,l=0,temp,p=0;
	char a[10], b[10];
	puts("Enter on string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	printf("The length of the string %s is: %d", a, l);
	i=0;
	for(j=l-1;j>=0;j--)
	{
		b[p]=a[j];
		p++;
	}
	printf("\nReverse string is: ");
	puts(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
		temp=1;
		break;
	    }
	}
		
    if(temp==0)
    printf("\nPalindrome");
    else
    printf("\nNot Palindrome");
	return 0;
}	

