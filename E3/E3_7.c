#include <stdio.h>

int main( void )
{
	int x, y, z;
	for ( x = 1; x < 5; x++ ) {
		for ( y = x; y < 5; y++ ) {
			for ( z = y; z < 5; z++ ) {
				printf("( %d, %d, %d ) \n", x, y, z );
			}
		}
	}

	return 0;
}