#include <stdio.h>

int main(void)
{
	int i;
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

    for ( int i = a; i < b; i++ ) {
        if ( i % 3 == 0 ) {
            printf("%d ", i);
        } else if ( i % 5 == 0 ) {
            printf("%d ", i);
        }
    }

	return 0;
}