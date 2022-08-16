#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    int answer = 0;
    if (year % 4 == 0 && year % 100 != 0)
        answer = 1;
    else if (year % 400 == 0)
        answer = 1;
    else
        answer = 0;
    printf("%d", answer);    
}