#include <stdio.h>

int main(void)
{
    int t, h, w, n, room, xx, yy = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        xx = n / h + 1; 
        yy = n % h;
        if (yy == 0)
        {
            xx = n / h;  
            yy = h;
        } 
        room = 100 * yy + xx;
        printf("%d\n", room);
    }
    return 0;    
}