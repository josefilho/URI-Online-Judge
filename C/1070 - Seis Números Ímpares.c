#include <stdio.h>

int main() {
  int x, i=0;
  scanf("%d", &x);
  for(i; i<12;++i) {
    if ((x + i) % 2 == 0) continue;
    printf("%d\n", x + i);
  }
  return 0;
}
