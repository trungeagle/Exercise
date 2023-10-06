#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld", a / b, a % b);
    return 0;
}