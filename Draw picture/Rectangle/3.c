#include <stdio.h>
void hollow_rectangle_n_m(int n, int m);
int main(){
    int n, m;
    scanf("%d%d",&n, &m);
    hollow_rectangle_n_m(n, m);
    return 0;
}
void hollow_rectangle_n_m(int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 || i == n || j == 1 || j == m){
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
}