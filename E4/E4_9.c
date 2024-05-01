#include <stdio.h>

void factorization(int n) {
    int num = n;
    int digit = 0;
    printf("%d -> ", n);

    while ( digit==0 ) {
        for ( int i = 2; i <= n; i++ ) {
            if ( num == i ) {
                digit++;
                printf("%d", i);
                break;
            } else if ( num % i == 0 ) {
                num /= i;
                printf("%d ", i);
                break;
            }
        }
    }

}

int main(void) {
    int n;

    scanf("%d", &n);

    factorization(n);

    return 0;
}