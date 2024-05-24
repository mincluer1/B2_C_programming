#include <stdio.h>

#define M 5
#define N 4

int main( void )
{
	int i, j;
	int sum;
	double average;
        // 使用しない変数は消去すること

	int a[ M ][ N ] = { { 70,  85,  70, 100 }, 
	                    { 60,  30,  40,  50 }, 
	                    { 50,  60,  70,  45 }, 
	                    { 80, 100,  90,  85 }, 
	                    { 75,  90,  55,  80 }, 
	};

    for ( i = 0; i < M; i++ ) {
        sum = 0;
        for ( j = 0; j < N; j++ ) {
            sum += a[i][j];
        }
        average = (double)sum / (double)N;
        printf("学生%dの平均点は、%f点\n", i, average);
    }

    for ( i = 0; i < N; i++ ) {
        sum = 0;
        for ( j = 0; j < M; j++ ) {
            sum += a[j][i];
        }
        average = sum / M;
        printf("%d回目の試験の平均点は、%f点\n", i, average);
    }

	return 0;
}