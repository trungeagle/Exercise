#include <stdio.h>
void inverted_triangle(int n); // inverted: đảo ngược
int main(){
    int n;
    scanf("%d",&n);
    inverted_triangle(n);
    return 0;
}
void inverted_triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
}