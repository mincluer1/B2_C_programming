
#include <stdio.h>

#define M 3

int main ( void )
{
	int a[ M ][ M ];
	int i, j;
	int sum;

	a[0][0] =  2; a[0][1] =  0; a[0][2] = -1;
	a[1][0] = -1; a[1][1] =  2; a[1][2] =  3;
	a[2][0] =  5; a[2][1] =  4; a[2][2] =  3;

	sum = 0;
	for( i = 0; i < M; i++ )
		sum += a[ 1 ][ i ];

	printf("%d \n", sum );



	sum = 0;
	for( i = 0; i < M; i++ )
		sum += a[ i ][ 2 ];

	printf("%d \n", sum );



	sum = 0;
	for( i = 0; i < M; i++ )
		sum += a[ i ][ (i+2)%M ];

	printf("%d \n", sum );



	sum = 0;
	for( i = 0; i < M; i++ ){
		for( j = 0; j < M; j++ ){
			sum += a[ i ][ j ];
		}
	}
	printf("%d \n", sum );



	sum = 0;
	for( i = 0; i < M; i++ ){
		for( j = 0; j < M; j++ ){
			if( (i+j)%2 == 0 )
				sum += a[ i ][ j ];	
		}
	}
	printf("%d \n", sum );


	return 0;
}