#include <stdio.h>
int main(){
    double C, F;
    scanf("%lf",&C);
    F = (C * 9/5) + 32;
    printf("%.2lf", F);
    return 0;
}