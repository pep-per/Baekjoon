#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  
  int answer[t];
  int a, b;
  for (int i = 0; i < t; i++)
  {
    scanf("%d %d", &a, &b);
    answer[i] = a + b; 
  }
  for (int i = 0; i < t; i++)
    printf("%d\n", answer[i]);
}