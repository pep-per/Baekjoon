#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // find max and min
    int max = nums[0];
    int min = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (max < nums[i])
            max = nums[i];
        if (min > nums[i])
            min = nums[i];                
    }
    printf("%d %d", min, max);
}