#include <stdio.h>
void rectangle_tilde(int n, int m); // tilde: dấu ngã
int main(){
    int n, m;
    scanf("%d%d",&n, &m);
    rectangle_tilde(n, m);
    return 0;
}
void rectangle_tilde(int n, int m){
    for(int i  = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 || i == n || j == 1 || j == m){
                printf("* ");
            }
            else printf("~ ");
        }
        printf("\n");
    }
}