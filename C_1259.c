#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[6];
  int len;
  int i;
  int is_palindrome;
  while (1)
  {
    scanf("%s", str);
    i = 0;
    if (str[i] == '0')
      break;
    len = strlen(str);
    is_palindrome = 1;
    while (i < len / 2)
    {
      if (str[i] != str[len - 1 - i])
      {
        is_palindrome = 0;
        break;
      }
      i++;
    }
    if (is_palindrome)
      printf("yes\n");     
    else
      printf("no\n");
  }
  return 0;   
}