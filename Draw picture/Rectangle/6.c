#include <stdio.h>
void rectangle_number(int n, int count);
int main(){
    int n, count = 0;
    scanf("%d",&n);
    rectangle_number(n, count);
    return 0;
}
void rectangle_number(int n, int count){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", count + j);
        }
        printf("\n");
        count++;
    }
}