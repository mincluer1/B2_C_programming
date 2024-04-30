#include <stdio.h>

int main(void){
    int total = 0;
    int max;

    scanf("%d", &max);

    for (int i = 0; i <= 200; i++ ) {
        total += i;

        if ( total >= max ) {
            printf("n = %d, total = %d", i, total);
            break;
        }
    }

    return 0;
}