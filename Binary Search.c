#include <stdio.h>
int main()
{
 int size, i, key;
 int a[100];
 int beg, end, mid;
 int position = -1;
 printf("Enter number of elements: ");
 scanf("%d", &size);
 printf("Enter elements in sorted order:\n"); for (i = 0; i < size; i++)
 {
 scanf("%d", &a[i]);
 }
 printf("Enter element to search: ");
 scanf("%d", &key);
 beg = 0;
 end = size - 1;
 while (beg <= end)
 {
 mid = (beg + end) / 2;
 if (key == a[mid])
 {
 position = mid;
 break;
 }
 else if (key < a[mid])
 {
 end = mid - 1;
 }
 else
 { beg = mid + 1;
 }
 }
 if (position != -1)
 printf("Element found at position %d\n", position + 1);
 else
 printf("Element not found\n");
 return 0;
}
