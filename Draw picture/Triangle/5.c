#include <stdio.h>
void triangle_num(int n);
int main(){
    int n;
    scanf("%d",&n);
    triangle_num(n);
    return 0;
}
void triangle_num(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}