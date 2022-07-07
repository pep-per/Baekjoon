#include <stdio.h>

int main(void) 
{
    int count;
    int result;

    scanf("%d", &count);
    char nums[count];
    scanf("%s", nums);

    result = 0;
    for (size_t i = 0; i < count; i++)
        result += nums[i] - '0';
    printf("%d", result);
}