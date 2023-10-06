#include <stdio.h>
int main(){
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a / b == c || b / c == a || c / a == b){
        printf("/");
    }
    else printf("NOSOL");
    return 0;
}