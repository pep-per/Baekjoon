#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  char mul[10];
  sprintf(mul, "%d", a * b * c);
  
  int i = 0;
  int nums[10] = {0};
  while (mul[i])
  {
    nums[mul[i] - '0']++; 
    i++;
  }
  for (int i = 0; i < 10; i++)
    printf("%d\n", nums[i]);
}