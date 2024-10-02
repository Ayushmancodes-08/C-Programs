#include <stdio.h>
int main()
{
  int num, a, b, c;
  printf("Enter a three digit number\n");
  scanf("%d", &num);
  a = num / 100;
  b = (num % 100) / 10;
  c = (num % 100) % 10;
  printf("Sum of %d is %d+%d+%d=%d", num, a, b, c, (a + b + c));

  return 0;
}