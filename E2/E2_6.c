#include <stdio.h>

int main(void){
    char x;

    x = 97;

    for ( int i = x; i <= 122; i++ ) {
        printf("%c ", i);
    }

    return 0;
}