#include <stdio.h>

int sum_resident(int k, int n)
{
    int resident[n + 1];
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            for (int j = 1; j < n + 1; j++)
                resident[j] = j;
        else
            for (int j = 1; j < n; j++)
                resident[j + 1] += resident[j];
    }
    int sum = 0;
    for (int i = 1; i < n + 1; i++)
        sum += resident[i];
    return sum;    
}

int main(void)
{
    int t;
    scanf("%d", &t);
    int k, n, sum;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &k, &n);
        sum = sum_resident(k, n);
        printf("%d\n", sum);
    }
    return 0;    
}