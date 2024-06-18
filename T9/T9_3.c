#include <stdio.h>

int main(void) {
    int i;
    //  list 8-3
    // char base = 'a';
    // char *p = &base;
    
    // for( i = 0; i < 5; i++ ) {
    //     printf("%p ", p + i);
    // }

    // list 8-4
    // int base = 1;
    // int *p = &base;

    // for( i = 0; i < 5; i++ ) {
    //     printf("%p ", p + i);
    // }

    // list 8-5
    int base = -4;
    int *p = &base;

    for( i = 0; i < 5; i++ ) {
        printf("%p ", p);
        p += 3;
    }

    // list 8-3
    // printf(" size = %zd\n", sizeof(char));
    // list 8-4, 8-5
    printf(" size = %zd\n", sizeof(int));

    return 0;
}