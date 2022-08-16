#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double result = (double)a/b;
    printf("%.9f", result);
}