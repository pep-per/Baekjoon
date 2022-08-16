#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gcf = 1;
    int i = 1;
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
            gcf = i;        
        i++;
    }
    int lcm = a;
    while (lcm <= a * b)
    {
        if (lcm % a == 0 && lcm % b == 0)
            break;        
        lcm++;
    }
    printf("%d\n%d\n", gcf, lcm);    
}