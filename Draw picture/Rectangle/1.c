#include <stdio.h>
void rectangle(int n);
int main(){
    int n;
    scanf("%d", &n);
    rectangle(n);
    return 0;
}
void rectangle(int n){
    for(int  i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }
}