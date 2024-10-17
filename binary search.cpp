#include<stdio.h>
int main()
{
  int arr[10], search, i, n, f=0, lb=0, ub, mid;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  ub=n-1;
  printf("Enter inputs: ", n);
  for (i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
 printf("Enter a number to search: ");
  scanf("%d", &search);
  while(lb<=ub)
  {
    mid=(lb+ub)/2;
    if(arr[mid]>search)
        ub=mid-1;
    else if(arr[mid]<search)
    lb=mid+1;
    else if(arr[mid]==search)
    {
    f=1;
    break;
    }
  }
  if(f==1)
  {
    printf("Element is present in array");
  }
  else
  {
  printf("Element is not present in array");
  }
}