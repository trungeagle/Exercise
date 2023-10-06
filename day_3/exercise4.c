#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if(c >= 'A' && c <= 'Y'){
        printf("%c", c + 33);
    }
    if(c >= 'a' && c <= 'y'){
        printf("%c", c + 1);
    }
    if(c == 'z' || c == 'Z'){
        printf("a");
    }
    return 0;
}