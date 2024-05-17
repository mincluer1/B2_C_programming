#include <stdio.h>
#define  N  5 

int main(void) {
    int i;
    double sec[N];
    double mps[N];
    sec[0] = 7.2;
    sec[1] = 6.7;
    sec[2] = 8.3;
    sec[3] = 6.9;
    sec[4] = 7.7;



    for ( i = 0; i < N; i++ ) {
        printf("sec = %lf\n", sec[i]);
        mps[i] = 50 / sec[i];
    }

    printf("\n");

    for ( i = 0; i < N; i++ ) {
        printf("m/s = %lf\n", mps[i]);
    }

    return 0;
}