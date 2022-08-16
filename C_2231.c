#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum;
    int i = 1;
    int j;
    while (i <= n)
    {
        j = i;
        sum = i;
        while (j >= 1)
        {
            sum += (j % 10);
            j = j / 10;
        }
        if (sum == n)
        {
            printf("%d", i);
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;
}
