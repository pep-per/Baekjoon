#include <stdio.h>
#include <math.h>

int main(void)
{
    int l;
    scanf("%d", &l);
    char str[51];
    scanf("%s", str);
    long long result = 0;
    long long r = 1;
    for (int i = 0; i < l; i++)
    {
        result += (str[i] - 'a' + 1) * r;
        result %= 1234567891;
        r *= 31;
        r %= 1234567891;
    }
    printf("%d", result);
    return 0;
}

// 오버플로우 방지를 위해, 제곱수를 큰 소수로 나눠주는 과정이 필요하다.
// 모듈로 연산
// 덧셈법칙 >> (a + b) mod n = (a mod n + b mod n) mod n
// 덧셈법칙에 의해 수식의 모든 항을 더한 뒤 마지막에 소수로 나누는 것과,
// 각 항마다 소수로 나누고 그 항들의 합을 더해서 다시 소수로 나눈 것이 동일함
// 곱셈법칙 >> (a * b) mod n = {(a mod n) * (b mod n)} mod n
// a = (str[i] - 'a' + 1), b = r, n = 1234567891일 떄
// {(str[i] - 'a' + 1) * r} mod 1234567891 
// = {(str[i] - 'a' + 1) mod 1234567891 * r mod 1234567891} mod 1234567891 
// = {(str[i] - 'a' + 1) * r mod 1234567891} mod 1234567891
// (str[i] - 'a' + 1)은 1 ~ 26 범위이므로 1234567891로 나눈 나머지와 동일함
// 마찬가지로, (r * 31) mod 1234567891 
// = (r mod 1234567891 * 31 mod 1234567891) mod 1234567891
// = (r mod 1234567891 * 31) mod 1234567891