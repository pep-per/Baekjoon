#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 0;
    while (n > 0)
    {
        if (n % 3 == 0 && n / 3 < 5)
        {
            count += n / 3;
            break;
        }
      
        if (n >= 5)
            n -= 5;
        else if (n >= 3)
            n -= 3;
        else
        {
            count = -1;
            break;
        }
        count++;  
    }
    printf("%d", count);
    return 0;    
}