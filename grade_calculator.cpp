#include <stdio.h>
int main()
{
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	if ((marks>=90)&&(marks<=100))
	printf("The grade is A+");
	else if ((marks>=80)&&(marks<=90))
	printf("The grade is A");
	else if ((marks>=70)&&(marks<=80))
	printf("The grade is B+");
	else if ((marks>=60)&&(marks<=70))
	printf("The grade is B");
	else if ((marks>=50)&&(marks<=60))
	printf("The grade is C");
	else if ((marks>=40)&&(marks<=50))
	printf("The grade is D");
	else if ((marks>=35)&&(marks<=40))
	printf("The grade is E");
	else
	printf("The grade is F");
	return 0;
}
