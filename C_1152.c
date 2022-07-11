#include <stdio.h>

int main(void)
{
  char str[1000001];
  int  i;
  int count;
  i = 0;
  count = 0;
  scanf("%1000000[^\n]s", str);
    
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    {
      count++;
      while (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        i++;
    }
    i++;
  }
  printf("%d", count);
}