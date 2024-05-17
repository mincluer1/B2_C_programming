#include <stdio.h>
#define  N  5 

int main(void) {
    int i;
    double sec[N] = { 7.2, 6.7, 8.3, 6.9, 7.7 };
    double mps[N];



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