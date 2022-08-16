#include <stdio.h>

int main(void)
{
    int num[5];
    int answer = 0;
    for (int i = 0; i < 5; i++)
    {
      scanf("%d", &num[i]);    
      answer += num[i] * num[i];
    }
    printf("%d", answer % 10);
}