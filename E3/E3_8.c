#include <stdio.h>

int main(void) {
    int x, y, z;
    int cnt = 0;

    int n;

    scanf("%d", &n);
    
	for ( x = 1; x <= n; x++ ) {
		for ( y = x; y <= n; y++ ) {
			for ( z = y; z <= n; z++ ) {
                if ( x * x + y * y == z * z ) {
                    cnt++;
                }
			}
		}
	}

    printf("n = %dのとき、%d個", n, cnt);

    return 0;
}