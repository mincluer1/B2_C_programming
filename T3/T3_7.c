#include <stdio.h>

int main( void ){
	int m, n;

    int i, j = 0;

	scanf( "%d", &m );
	scanf( "%d", &n );

    for ( i = 1; i <= m; i++ ){
        for ( j = 1; j <= n; j++ ) {
            printf("*");
        }
        printf("\n");
    }


	return 0;
}