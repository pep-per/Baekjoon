#include <stdio.h>

int main(void)
{
  int h, m;
  scanf("%d %d", &h, &m);
  if (m < 45)
  {
    m = m + 15;
    h--;  
    if (h == -1)
        h = 23;
  }
  else
      m = m - 45;
  printf("%d %d", h, m);
}