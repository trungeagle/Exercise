#include <stdio.h>
void inverted_triangle_right(int n);
int main(){
    int n;
    scanf("%d",&n);
    inverted_triangle_right(n);
    return 0;
}
void inverted_triangle_right(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j < i){
                printf("  ");
            }
            else printf("* ");
        }
        printf("\n");
    }
}
