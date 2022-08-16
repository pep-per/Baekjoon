#include <stdio.h>

int check_666(int num)
{
    char str[100];
    int i = 0;
    while (num >= 1)
    {
        str[i] = num % 10 + '0';
        num /= 10;
        i++;
    }
    int count = 0;
    while (i - 1 >= 0)
    {
        if (str[i - 1] == '6')
            count++;
        else
            count = 0;
        if (count == 3)
            return 1;
        i--;
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int num = 666;
    while (1)
    {
        if (check_666(num))
            n--;
        if (n == 0)
            break;
        num++;
    }
    printf("%d", num);
    return 0;
}