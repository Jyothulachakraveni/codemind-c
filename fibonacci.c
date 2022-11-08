#include <stdio.h>
int main() {

  int i, n;
  int f1 = 0, f2 = 1;

  int f3 = f1 + f2;
  scanf("%d", &n);

  printf("%d %d ", f1, f2);

  for (i = 3; i <= n; ++i) {
    printf("%d ",f3);
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }

  return 0;
}