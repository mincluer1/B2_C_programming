#include <stdio.h>
#define N 10

int main(void) {
    int d[ N ] = { 54, 28, 72,  9, 39, 44, 69, 15, 97, 88};
    int temp;
    int i, j;

    for( int k = 0; k < N; k++ )	
		printf("%d ", d[k]);	

	printf("\n");

    for ( i = 0; i < N - 1; i++ ) {
        for ( j = i + 1; j < N; j++ ) {
            if ( d[i] > d[j] ) {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
                
                for ( int l = 0; l < N; l++ ) {
                    printf("%d ", d[l]);
                }

                printf("\n");
            }
        }
    }

    return 0;
}