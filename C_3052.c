#include <stdio.h>

int main(void)
{
    int remainder[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &remainder[i]);
        remainder[i] %= 42;
    }
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
          if (remainder[i] == remainder[j])
          {
            count++;
            break;            
          }
        }
    }
    printf("%d", 10 - count);        
}
