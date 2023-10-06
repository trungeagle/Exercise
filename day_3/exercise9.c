#include <stdio.h>
#include <math.h>
int main(){
    float a, b;
    scanf("%f%f",&a, &b);
    int c = (int)a;
    int d = (int)b;
    if(c == a){
        c++;
    }
    printf("%d", d - c);
    return 0;
}