#include <stdio.h>
#define N 10

int main(void) {
    int m;
    int a[N];
    int b[N];

    scanf("%d", &m);

    for ( int i = 0; i < N; i++ ) {
        a[i] = i * i;
    }

    for ( int i = 0; i < N; i++ ) {
        b[(i+m)%N] = a[i];
    }

    for ( int i = 0; i < N; i++ ) {
        printf("%d ", b[i]);
    }

    return 0;
}