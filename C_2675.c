#include <stdio.h>
#include <string.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  char s[1000][21] = { 0, };
  int r[1000];
  for (int i = 0; i < t; i++)
    scanf("%d %s", &r[i], s[i]);

  int len;
  for (int i = 0; i < t; i++)
  {
    len = strlen(s[i]);
    for (int j = 0; j < len; j++)
      for (int k = 0; k < r[i]; k++)
        printf("%c", s[i][j]);
    printf("\n");
  }
}