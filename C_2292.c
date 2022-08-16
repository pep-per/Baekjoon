#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 1;
    int room = 1;
    while (room < n)
    {
        if (n == 1)
          break;
        room += 6 * count;
        count++;        
    }
    printf("%d", count);
    return 0;
}