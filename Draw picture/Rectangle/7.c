#include <stdio.h>
void rectangle_number_increase(int n, int count, int temp);
int main(){
    int n, count = 0, temp = 0;
    scanf("%d",&n);
    rectangle_number_increase(n, count, temp);
    return 0;
}
void rectangle_number_increase(int n, int count, int temp){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", count + j);
            temp = count + j;
        }
        printf("\n");
        count = temp;
    }
}