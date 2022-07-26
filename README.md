# 8.2.8_min_max_pomenyat_mestami_massiv

Поменять местами столбцы с минимальной и максимальной суммой элементов.

Входные данные:
Два натуральных числа 
N
N и 
M
M. Далее с новой строки 
N
N строк по 
M
M целых чисел в каждой. 
N
N и 
M
M не превышают десяти.

Выходные данные: 
Вывести исходную матрицу 
N
N на 
M
M, в которой столбцы с минимальной и максимальной суммой элементов поменяны местами. Числа разделять пробелами. Если присутствует несколько столбцов с одинаковой минимальной суммой элементов, то использовать первый по порядку. Аналогично с максимальной суммой.

Sample Input:
3 4
1 2 3 4
1 3 4 5
0 2 3 -2
Sample Output:
3 2 1 4
4 3 1 5
3 2 0 -2

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

