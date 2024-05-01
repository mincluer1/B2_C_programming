#include <stdio.h>

int comp( int x, int y )
{
	return x * x * x + x * x * y + x * y * y + y * y * y;
}

int main(void) {
    int a, b, result;

    scanf("%d %d", &a, &b);

    result = comp(a, b);

    printf("a = %d, b = %d, result = %d\n", a, b, result);

    return 0;
}