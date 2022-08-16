#include <stdio.h>

int main(void)
{
    char pitch_name[] = "cdefgabC";
    int index;
    int pitch_index[8];
    for (int i = 0; i < 8; i++)
    {
      scanf("%d", &index);
      if (pitch_name[index - 1])
        pitch_index[i] = index;
    }

    int sign = 1;
    int ascending = 0;
    for (int i = 1; i < 7; i++)
    {
        sign *= (pitch_index[i] - pitch_index[i - 1]);
        sign *= (pitch_index[i + 1] - pitch_index[i]);
        if (sign < 0)
        {
            printf("mixed");    
            return 0;
        }
        else if (pitch_index[i + 1] - pitch_index[i] > 0)
            ascending = 1;
    }
    if (ascending)
        printf("ascending");
    else
        printf("descending");
    return 0;    
}