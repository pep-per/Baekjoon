#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    char str[80];
    int j;
    int count;
    int score;
    for (int i = 0; i < t; i++)
    {
        scanf("%s", str);
        j = 0;
        count = 0;
        score = 0;
        while (str[j])
        {
            if (str[j] == 'O')
                count++;
            else
                count = 0;
            score += count;
          j++;
        }
        printf("%d\n", score);
    }
    return 0;
}