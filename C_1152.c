#include <stdio.h>

int main(void)
{
  char str[1000000];
  int  i;
  int count;
  i = 0;
  count = 0;
  scanf("%[^\n]s", str);
    
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