#include <stdio.h>
#include <math.h>

int main(void)
{
    int len[3];
    int is_right = 0;
    while(1)
    {
        scanf("%d %d %d", &len[0], &len[1], &len[2]);
        if (!len[0] || !len[1] || !len[2])
            return 0;
        for (int i = 0; i < 3; i++)
        {
            if (pow(len[i], 2) == pow(len[(i+1)%3], 2) + pow(len[(i+2)%3], 2))
            {
                is_right = 1;
                break;        
            }
        }
        if (is_right)
            printf("right\n");
        else
            printf("wrong\n");
        is_right = 0;
    }
}