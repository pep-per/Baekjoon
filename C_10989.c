#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[10000];
    for (int i = 0; i < 10000; i++)
        arr[i] = 0;
    int idx;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &idx);
        arr[idx - 1]++;
    } 
    for (int i = 0; i < 10000; i++)
        while(arr[i]--)  
            printf("%d\n", i + 1); 
}