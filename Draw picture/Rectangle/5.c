#include <stdio.h>
void rectangle_binary(int n);
int main(){
    int n;
    scanf("%d",&n);
    rectangle_binary(n);
    return 0;
}
void rectangle_binary(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 == 0){
                if(j % 2 == 0) printf("1 ");
                else printf("0 ");
            }
            else{
                if(j % 2 == 0) printf("0 ");
                else printf("1 ");
            }
        }
        printf("\n");
    }
}