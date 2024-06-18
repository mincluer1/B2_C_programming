#include <stdio.h>
#define N 30

int min(int num1, int num2) {
    // num1とnum2を比較し、大きい方の値を返す
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

void a_sort( int a[ N ] ){

	int b[ N ];

	// まず，ターミネータの位置を決定
    int terminate_place;

    for ( int i = 0; i < N; i++ ) {
        if ( a[i] == -1 ) {
            terminate_place = i;
            break;
        }
    }

    for ( int j = 0; j < terminate_place; j++ ) {
        int min_num = 100;
        int min_num_cnt = 0;
        
        for ( int i = 0; i < terminate_place; i++ ) {
            if ( min_num > min(min_num, a[i]) ) {
                min_num = a[i];
                min_num_cnt = i;
            }
        }
        b[j] = min_num;
    }

    for ( int i = 0; i < N; i++ ) {
        printf("%d ",b[i]);
    }

    a = b;
}

int main( void )
{

	int a[ N ] = { 75, 44, 98, 76, 42, 87, 64, 88, 78, 55, 91, 69, 47, 84, 75, 63, 81, 29, 42, 53, -1 };

    a_sort(a);

    // for ( int i = 0; i < N; i++ ) {
    //     printf("%d ",a[i]);
    // }

	return 0;
}