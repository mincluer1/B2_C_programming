#include <stdio.h>

// void sub( int *x, int *y )
// {
// 	*x = *x + 1;
// 	*y = *y * 2;
// }

// change_function
void sub( int *x, int *y )
{
	*x = *x * *y;
	*y = *x * *y;
}

int main( void )
{
	int a = 10;
	int b = 20;

	printf("before: a=%d, b=%d\n", a, b);

	sub( &a, &b );    // a と b のアドレスを渡している

	printf("after:  a=%d, b=%d\n", a, b);

	return 0;
}