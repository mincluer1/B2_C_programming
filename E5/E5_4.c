#include <stdio.h>

double powdbl(double, int);
int combi(int, int);
int fact(int);

int main(void) {
    double p;
    int n;

    scanf("%lf", &p);
    scanf("%d", &n);

    for ( int i = 0; i <= n; i++ ) {
        printf("i = %d, %lf\n", i, combi(n, i)*powdbl(p, i)*powdbl(1-p, n-i));
    }

    return 0;
}

double powdbl(double x, int p) {
    double y = 1;

    while (p-- > 0) {
        y *= x;
    }

    return y;
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

