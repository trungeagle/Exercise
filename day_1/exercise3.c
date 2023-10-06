#include <stdio.h>
int main(){
    int a, b, c, sum;
    scanf("%d%d%d",&a, &b, &c);
    sum = a * (b + c) + b * (a + c);
    printf("%d", sum);
    return 0;
}