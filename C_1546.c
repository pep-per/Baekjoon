#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int score[1000] = {0};
  for (int i = 0; i < n; i++)
    scanf("%d", &score[i]);

  // find the max score
  float max = 0;
  for (int i = 0; i < n; i++)
      if (max < score[i])
          max = score[i];
  
  // average
  float avg = 0;
  for (int i = 0; i < n; i++)
    avg = avg + (score[i]/max*100)/n;
  printf("%f", avg);
}