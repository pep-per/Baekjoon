#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int bc = 1;
    for (int i = 0; i <= k - 1; i++)
        bc *= (n - i);
    for (int i = 1; i <= k; i++)
        bc /= i;    
    printf("%d", bc);
    return 0;   
}