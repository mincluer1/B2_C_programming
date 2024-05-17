#include <stdio.h>

long long int fact( int );

int main( void ){
	fact(30);

	return 0;
}

long long int fact( int n ){

	int i;
    long long int fact = 1;

    for ( i = 1; i <= n; i++ ) {
        fact *= i;
        printf("%d! = \t%lld\n", i, fact);
    }

	return fact;
}