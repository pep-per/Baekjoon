#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  char a_rev[4];
  char b_rev[4];
  for (int i = 0; i < 3; i++)
  {
    a_rev[i] = a % 10 + '0';
    b_rev[i] = b % 10 + '0';
    a /= 10;
    b /= 10;
  }
  a_rev[3] = '\0';
  b_rev[3] = '\0';
  int a_is_max;
  for (int i = 0; i < 3; i++)
  {
      if (a_rev[i] - b_rev[i] > 0)
      {
        a_is_max = 1;
        break;
      }
      else if (a_rev[i] - b_rev[i] < 0)
      {
        a_is_max = 0;
        break;
      } 
  }
  if (a_is_max)
    printf("%s", a_rev);        
  else
    printf("%s", b_rev);        
  return 0;
}