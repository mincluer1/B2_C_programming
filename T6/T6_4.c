#include <stdio.h>

int main(void) {
    int i;
    int prize[5];
    prize[0] = 10000;
    prize[1] = 5000;
    prize[2] = 3000;
    prize[3] = 1000;
    prize[4] = 500;

    while(1) {
        scanf("%d", &i);

        if ( i >= 1 && i <= 5 ) {
            printf("%d等は、%d円です", i, prize[i-1]);
            break;
        } else {
            printf("1 以上 5 以下の値を入力して下さい");
        }
    }

    return 0;
}