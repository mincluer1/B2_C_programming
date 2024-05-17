#include <stdio.h>

int main(void) {
    int i;
    int cnt = 0;
    int array[4];
    array[0] = 80;
    array[1] = 75;
    array[2] = 50;
    array[3] = 90;

    for ( i = 0; i <= 3; i++ ) {
        printf("%d\n", array[i]);
        cnt += array[i];
    }

    printf("for_loop: %d\n", cnt);
    printf("calc by hands: %d\n", array[0]+array[1]+array[2]+array[3]);

    return 0;
}