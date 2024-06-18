#include <stdio.h>
#include <math.h>

#define FULL 10
#define N 50  /*  使用しない場合は削除すること */

int main ( void ) {
	int freq[ FULL+1 ] = { 1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4 };    /* 点数が i である学生の人数を格納する配列 freq */
    double total = 0;
    double v = 0;
    double s = 0;

    double average;

    for ( int i = 0; i <= 10; i++ ) {
        total += i*freq[i];
    }

    average = total / N;

    for ( int i = 0; i <= 10; i++ ) {
        for ( int j = 0; j < freq[i]; j++ ) {
            v += ( i - average ) * ( i - average );
        }
    }

    average = total/N;
    v = v / 50;
    s = sqrt(v);

    printf("平均は %.2lf\n", average);
    printf("分散は %.2lf\n", v);
    printf("標準偏差は %.2lf\n", s);

    for ( int i = 0; i < FULL + 1; i++ ) {
        printf("%d点の人の偏差値は %.2lf\n", i, (10*(i - average)/s) + 50 );
    }

	return 0;

}