#include <stdio.h>

int main(void) {

    char s, t;
    int n, m;

    printf("s, t = ");
	scanf("%c %c", &s, &t);
	printf("n, m = ");
	scanf("%d %d", &n, &m);


    for ( int i = 0; i < n; i ++ ) {
        for ( int j = 0; j < m; j++ ) {
            if ( j >= i )  {
                printf("%c", s);
            } else {
                printf("%c", t);
            }
        }

        printf("\n");
    }
    return 0;
}