#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double average = (a + b + c * 2 + d * 3) / 7;
    if(average >= 8){
        printf("GIOI");
    }
    else if(average < 8 && average >= 6.5){
        printf("KHA");
    }
    else if(average < 6.5 && average >= 5){
        printf("TRUNG BINH");
    }
    else printf("YEU");
    return 0;
}