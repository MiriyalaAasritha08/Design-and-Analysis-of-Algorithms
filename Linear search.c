#include <stdio.h>
int main()
{
 int n, i, key, position = -1;
 int a[100];
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter elements:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 printf("Enter element to search: ");
 scanf("%d", &key);
 for (i = 0; i < n; i++) {
 if (a[i] == key)
 {
 position = i;
 break;
 }
 }
if (position != -1)
 printf("Element found at position %d\n", position + 1);
 else
 printf("Element not found\n");
 return 0;
}
