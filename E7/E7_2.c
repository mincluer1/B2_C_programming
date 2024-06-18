#include <stdio.h>
#include <math.h>

int main( void ){
	int a[ 50 ] = { 75, 44, 98, 76, 42, 87, 64, 88, 78, 55, 91, 69, 47, 84, 75, 63, 81, 29, 42, 53, -1 };
    int person_cnt = 0, sum = 0, sumV = 0;
    double ave, variance;

    for ( int i = 0; i < 50; i++ ) {
        if ( a[i] == -1 ) {
            person_cnt = i;
            break;
        }
        printf("%d ", a[i]);
        sum += a[i];
        sumV += a[i] * a[i];
    }

    ave = sum / (double)person_cnt;
    variance = ( sumV / (double)person_cnt ) - ( ave * ave );

    printf("\n");
    printf("受験者数は、%d\n", person_cnt);
    printf("テストの平均値は、%.2f\n", ave);
    printf("テストの標準偏差は、%.2f\n", sqrt(variance));

	return 0;
}