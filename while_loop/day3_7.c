#include <stdio.h>

int main() {
  int n;
  int a = 1;
  printf("\nEnter n:\t");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    a = 1;
    for (int j = 1; j <= i; j++) {
      printf("%d\t", a);
      a += 2;
    }
    printf("\n");
  }
  return 0;
}