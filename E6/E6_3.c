#include <stdio.h>
#define N 7

int main(void) {
    int a[N];
    int inv[N];

    for ( int i = 0; i < N; i++ ) {
        a[i] = i * i;
    }

    for ( int i = 0; i < N; i++ ) {
        inv[i] = a[N-i-1];
        printf("%d ", inv[i]);
    }

    return 0;
}