#include <stdio.h>
#include <stdlib.h>
void quickSort(int a[], int left, int right)//定义快速排序
{
  int i, j, k, t;
  if (left < right)
  {
    i = left; j = right; k = a[left];
    while (i < j)
    {
      while (i < j && a[j]  <= k)
        j--;
      while (i < j && a[i] >= k)
        i++;
      if (i < j)
      {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
    a[left] = a[i];
    a[i] = k;
    quickSort(a, 0, i - 1);
    quickSort(a, i + 1, right);
  }
}
int main(int argc, char const *argv[])
{
  int n = 0, i;
  printf("please enter n:\n");
  scanf("%d", &n);
  int *a = (int*)malloc(n * sizeof(int));//动态定义数组
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  quickSort(a, 0, n - 1);
  printf("After sort:");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  free(a);
}