#include <stdio.h>

int main() {
  int num_one;
  int num_two;

  printf("input two integers: ");
  scanf("%d %d", &num_one, &num_two);
  printf("%d + %d = %d\n", num_one, num_two, num_one+num_two);
  printf("%d - %d = %d\n", num_one, num_two, num_one-num_two);
  printf("%d * %d = %d\n", num_one, num_two, num_one*num_two);
  printf("%d / %d = %d\n", num_one, num_two, num_one/num_two);
  printf("%d %% %d = %d\n", num_one, num_two, num_one%num_two);
  return 0;
}
