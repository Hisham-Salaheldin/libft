#include <stdio.h>

int isAlpha(char c) {
    return (c >= 'a' && c <= 'z');
}
int isDigit(char c) {
    return (c >= '0' && c <= '9');
}
int main (){
    int x = '5';
    if (isDigit(x) || isAlpha(x)){
        printf("is alnum\n");
    }else{
        printf("is not alnum\n");
        return 0;
    };
    return 0;
}