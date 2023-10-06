#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("INF");
            }
            else printf("NO");
        }
        else printf("%.2lf", (-c / b));
    }
    else{
        double denta = pow(b , 2) - (4 * a * c);
        double square = sqrt(denta); 
        if(denta < 0){
            printf("NO");
        }
        else if(denta > 0){
            double x1, x2;
            x1 = (-b + square) /(2 * a);
            x2 = (-b - square) /(2 * a);
            printf("%.2lf %.2lf", x1, x2);
        }
        else{
            printf("%.2lf", (-b / 2 * a));
        }
    }
    return 0;
}