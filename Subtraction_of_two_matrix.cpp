#include <stdio.h>
int main()
{
	int i,j,n,col=0,row=0;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of coloumns: ");
	scanf("%d",&col);
	printf("Enter 1st matrix:\n");
	int a[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	printf("Enter element on row %d, coloumn %d: ",i+1,j+1);
	scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix:\n");
    int b[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	printf("Enter element on row %d, coloumn %d: ",i+1,j+1);
	scanf("%d",&b[i][j]);
        }
    } 
        printf("\n1st matrix:\n");
        for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	    printf("\n2nd matrix:\n");
        for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	int c[i][j];
	printf("The subtraction of 3rd matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
