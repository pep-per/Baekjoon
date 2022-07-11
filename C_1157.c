#include <stdio.h>

int main(void)
{
  char str[1000001];
  scanf("%1000000s", str);

  int i = 0;
  int alphabet[26] = {0};
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 'a' - 'A';
    alphabet[str[i] - 'A']++;
    i++;
  }
  
  i = 0;
  int max = 0;
  char answer = '0';
  while (i < 26)
  {
    if (max < alphabet[i])
    {
      max = alphabet[i];
      answer = i + 'A';
    }
    else if (max == alphabet[i])
      answer = '?';
    i++;
  }
  printf("%c", answer);
}