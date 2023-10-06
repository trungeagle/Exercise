#include <stdio.h>
int main(){
    long long a[5];
    for(int i = 0; i < 5; i++){
        scanf("%lld",&a[i]);
    }
    long long min1 = a[0];
    long long min2 = a[1];
    for(int i = 0; i < 5; i++){
        if(min1 > a[i])
        {
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] >= min1 && a[i] > min2){
            min2 = a[i];
        }
    }
    printf("%lld", min2);
    return 0;
}