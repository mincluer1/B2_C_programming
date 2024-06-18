#include <stdio.h>
#define N 20

int max(int num1, int num2) {
    // num1とnum2を比較し、大きい方の値を返す
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main ( void ){

	int array[ N ] = { 75, 34, 98, 76, 42, 87, 14, 38, 78, 55, 91, 69, 47, 84, 95, 63, 81, 29, 12, 33 };
	int array_sort[ N ];

    for ( int j = 0; j < N; j++ ) {
        int max_num = 0;
        int max_num_cnt = 0;
        
        for ( int i = 0; i < N; i++ ) {
            if ( max_num < max(max_num, array[i]) ) {
                max_num = array[i];
                max_num_cnt = i;
            }
        }
        array_sort[j] = max_num;
        array[max_num_cnt] = 0;
    }
    
    for ( int i = 0; i < N; i++ ) {
        printf("%d ", array_sort[i]);
    }

	return 0;
}