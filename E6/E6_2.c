#include <stdio.h>

int main(void) {
    int a[4] = { 3, -2, -1, 1};
    int b[4];
    int sum[4];
    int n;
    int cnt = 0;

    scanf("%d", &n);

    printf("b: \n");

    for ( int i = 0; i < 4; i++ ) {
        b[i] = n + i;
        printf("%d ", b[i]);
    }

    printf("\nsum: \n");

    for ( int i = 0; i < 4; i++ ) {
        sum[i] = a[i] + b[i];
        printf("%d ", sum[i]);
    }

    for ( int i = 0; i < 4; i++ ) {
        cnt += a[i] * b[i];        
    }

    printf("\n内積は、%d\n", cnt);

    return 0;
}