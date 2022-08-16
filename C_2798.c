#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int num[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    int result = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (num[i] < m)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                if (num[i] + num[j] < m)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (num[i] + num[j] + num[k] <= m && num[i] + num[j] + num[k] > result)
                            result = num[i] + num[j] + num[k];                        
                    }
                }
            }
        }
    }
    printf("%d", result);
    return 0;
}