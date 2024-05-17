#include <stdio.h>
#define N 10

int main(void) {
    int m, n;
    int x, y;
    int array[N];

    printf("m > ");
    scanf("%d", &m);

    printf("n > ");
    scanf("%d", &n);

    for ( int i = 0; i < N; i++ ) {
        array[i] = 2 * i;
    }

    x = array[m];
    y = array[n];
    
    array[m] = y;
    array[n] = x;

    for ( int i = 0; i < N; i++ ) {
        printf("%d ", array[i]);
    }

    return 0;
}