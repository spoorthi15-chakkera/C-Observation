#include <stdio.h>
int main()
 {
 int n,i,sum = 0;
 printf("enter n value:");
 scanf("%d", &n);
 int arr[n];
 printf("enter elements of array:");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &arr[i]);
 }
 for (i = 0; i < n; i++)
 {
 sum += arr[i];
 }
 printf("%d", sum);
 return 0;
}
