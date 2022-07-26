#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int m;
  scanf("%d %d", &n, &m) ;
  int array[n][m];
  int arr[m];
  int smin = 0;
  int smax = 0;
  int k = 0;
  int a = -100, b = 100;

for (int i=0; i<n; i++) //ввод чисел матрицы
{
  for (int j=0; j<m; j++)
  {
    scanf("%d", &array[i][j]);
    arr[j] = 0;
  }
}

printf("\n");

for (int i = 0; i < m; i++) //подсчет суммы каждого столбца
{
  for ( int j = 0; j < n; j++)
  {
    k = k + array[j][i];
  }
  arr[i] = k;
  k = 0;
}

for (int i = 0; i < m; i++)
{
  if (arr[i] > a)
    a = arr[i];
  if (arr[i] < b)
    b = arr[i];
}
for (int i = 0; i < m; i++)
{
  if (arr[i]==a)
    a = i;
  if (arr[i]==b)
    b = i;
}
for (int i = 0; i < n; i++)
{
  for (int j = 0; j < m; j++)
  {
    if (j == a)
      printf("%d ", array[i][b]);
    if (j == b) 
      printf("%d ", array[i][a]);
    if (j != b && j != a)
      printf("%d ", array[i][j]);
  }
  printf("\n");
}

return 0;
}

