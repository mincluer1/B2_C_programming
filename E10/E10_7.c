#include <stdio.h>
#define N 10

int search_insert( int a, int b[N] ) {
    for ( int i = 0; i < N; i++ ) {
        if ( b[i] == -1 ) {
            b[i] = a;
            return 0;
        } 

        if ( b[i] == a ) {
            return 1;
        }
    }

    return 0;
}

int main(void) {
    int a;
    int b[ N ];

    for ( int i = 0; i < N; i++ ) {
        b[i] = -1;
    }
    
    for ( int i = 0; i < N; i++ ) {
        scanf("%d", &a);
        if ( a == 0 ) {
            break;
        }
        
        int p_data = search_insert(a, b);
        
        if ( p_data == 1 ) {
            break;
        }
    }

    for ( int i = 0; i < N; i++ ) {
        printf("%d ", b[i]);
    }

    return 0;
}