#include <stdio.h>

int main(void)
{
    int num[9];
    int max = 0;
    int n = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        if (max < num[i])
        {
            max = num[i];
            n = i + 1;
        }
    }
    printf("%d\n%d", max, n);
}