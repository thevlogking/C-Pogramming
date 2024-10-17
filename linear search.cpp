#include <stdio.h>
int main()
{
  int arr[10], search, i, n,f=0;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  printf("Enter inputs: %d", n);
  for (i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter a number to search: ");
  scanf("%d", &search);
  for (i=0; i<n; i++)
  {
    if (arr[i] == search)
    {
     f=1;
      break;
    }
  }
  if (f==1)
    printf("%d is  present in the array.\n", search);
  else
    printf("%d is not present in the array.\n", search);

  return 0;
}