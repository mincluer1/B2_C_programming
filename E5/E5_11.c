#include <stdio.h>
#include <math.h>

double myexp(double);

int main(void) {
    printf("x                   myexp(x)\n");
    for ( int i = 1; i < 11; i ++ ) {
        double x = (double)i;
        printf("%lf\t%13.5lf\n", x, myexp(x));
    }

    return 0;
}

double fact( int n ){

	int i;
    double fact = 1;

    for ( i = 1; i <= n; i++ ) {
        fact *= i;
    }

	return fact;
}


double myexp( double x ) {
    double y = 1;
    int cnt = 1;

    while(1) {
        y += pow(x, cnt) / fact(cnt); 
        
        if ( ( pow(x, cnt) / fact(cnt) ) < pow(10, -6)) {
            break;
        }

        cnt++;
    }

    return y;
}

