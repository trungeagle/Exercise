#include <stdio.h>
void triangle_right_side(int n);
int main(){
    int n;
    scanf("%d",&n);
    triangle_right_side(n);
    return 0;
}
void triangle_right_side(int n){
     for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n - i){
                printf("  ");
            }
            else printf("* ");
        }
        printf("\n");
    }
}