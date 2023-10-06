#include <stdio.h>
void rectangle_tilde_num(int n);
int main(){
    int n;
    scanf("%d",&n);
    rectangle_tilde_num(n);
    return 0;
}
void rectangle_tilde_num(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n - i){
                printf("~ ");
            }
            else printf("%d ",i);
        }
        printf("\n");
    }
}