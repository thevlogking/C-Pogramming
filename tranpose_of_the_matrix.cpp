a#include <stdio.h>
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
    printf("The Matrix is:\n ");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	    printf("The tranpose of the matrix is:\n ");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
