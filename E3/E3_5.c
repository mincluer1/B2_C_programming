#include <stdio.h>

int main(void) {
    int a, b;
    int n;
    int cnt = 0;

    scanf("%d", &n);
    
    for ( int a = 1; a < n && a <= 10; a++ ) {
        for ( int b = 1; a + b < n && a <= 20; b++ ) {
            cnt ++;
            // printf("%d,%d\n", a, b);
        }
    }

    printf("n = %dのとき、%d個", n, cnt);
}