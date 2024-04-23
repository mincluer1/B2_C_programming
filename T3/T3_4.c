#include <stdio.h>

int main(void){
    int max;
    int i = 1;

    scanf("%d",&max);

    while (i <= max) {
        if ( i % 3 == 0 ) {
            printf("%d ", i);
        } else if ( i % 5 == 0 ) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}