#include <stdio.h>
#include <math.h>

#define M 3

int main ( void )
{
	double a[ M ][ M ];
	int i, j;
    double tr_sum, pro_sum;

	a[0][0] =  2.5; a[0][1] =  0.0; a[0][2] = -1.0;
	a[1][0] = -1.0; a[1][1] =  1.5; a[1][2] =  0.0;
	a[2][0] =  5.0; a[2][1] =  4.0; a[2][2] =  3.0;

    tr_sum = 0;
	/* ここで行列のトレースを求める */
    for ( i = 0; i < M; i++ ) {
        tr_sum += a[i][i];
    }

    pro_sum = 0;
	/* ここで行列のフロベニウスノルムを求める */
    for ( i = 0; i < M; i++ ) {
        for ( j = 0; j < M; j++ ) {
            pro_sum += a[i][j] * a[i][j];
        }
    }

	/* トレースとフロベニウスノルムを表示する */    
    printf("trace = %f\n", tr_sum);
    printf("matrix norm = %f", sqrt(pro_sum));

	return 0;
}