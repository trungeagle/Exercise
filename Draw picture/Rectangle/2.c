#include <stdio.h>
void hollow_rectangle(int n);
int main(){
    int n;
    scanf("%d",&n);
    hollow_rectangle(n);
    return 0;
}
void hollow_rectangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}