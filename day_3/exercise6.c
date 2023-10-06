#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a + b >= c && a + c >= b && b + c >= a){
        if(a == b || a == c || b == c){
            if(a != b || a != c || b != c){
                printf("2");
            }
            else printf("1");
        }
        else if((sqrt(pow(a, 2) + pow(b, 2)) == c) || (sqrt(pow(a, 2) + pow(c, 2)) == b) || (sqrt(pow(b, 2) + pow(c, 2)) == a)){
            printf("3");
        }
        else printf("4");
    }
    else printf("Invalid");
    return 0;
}