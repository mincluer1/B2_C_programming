#include <stdio.h>

int main(void){
    int diff;
    char large;
    char x;

    printf("入力してください>>>");
    scanf("%c", &x);

    if ( (int)x >= 65 && (int)x < 97 ) {
        diff = 'a' - 'A';
        large = x + diff;
        printf("大文字は%c 小文字は%c\n", large, x);
    } else if ( (int)x >= 97 ) {
        diff = 'a' - 'A';
        large = x - diff;
        printf("大文字は%c 小文字は%c\n", large, x);
    } else {
        printf("%c\n", x);
    }

    return 0;
}