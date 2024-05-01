#include <stdio.h>


int sum_by_formula( int n )
{
	return n * ( n + 1 ) / 2;    
}

int sum_by_loop( int n ) {
    int total = 0;
    for ( int i = 0; i <= n; i++ ) {
        total += i;
    }

    return total;
}

int main(void) {
    int n;

    scanf("%d", &n);

    printf("sum_by_formula: %d\n", sum_by_formula(n));
    printf("sum_by_loop: %d\n", sum_by_loop(n));

    return 0;
}