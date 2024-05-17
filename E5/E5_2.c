#include <stdio.h>

int fact( int );
int combi(int, int);

int main( void ){
	int n, m;

    scanf("%d", &n);

    for ( m = 0; m <= n; m++ ) {
        printf("%dC%d = %d\n", n, m, combi(n, m));
    }

	return 0;
}

int combi(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int fact( int n ){

	int i;
    int fact = 1;

    for ( i = 1; i <= n; i++ ) {
        fact *= i;
    }

	return fact;
}