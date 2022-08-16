#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int dist[] = {abs(x - w), abs(y - h), y}; 
    int result = x;
    for (int i = 0; i < 3; i++)
        result = result < dist[i] ? result : dist[i];
    printf("%d", result);
    return 0;
}