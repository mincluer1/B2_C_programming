#include <stdio.h>
#include <math.h>

int main(void) {
    int d[33] = { 160, 178, 156, 194, 145, 168, 169, 164, 171, 180, 174, 175, 182, 150, 151, 164, 182, 145, 190, 163, 167, 140, 147, 153, 158, 185, 161, 153, 157, 176, 153, 174, 167 };
    double m, v, s;
    int i;
    double sum;
    
    for ( i = 0; i < 33; i ++ ) {
        m += d[i];
    }

    m = m / 33;

    for ( sum = 0.0, i = 0; i < 33; i++) {
        sum += ( d[i] - m ) * ( d[i] - m );
    }

    v = sum / 33; 
    s = sqrt(v);

    printf("リスト6.7での計算方法を使用\n");
    printf("平均    = %10.3f\n", m);
    printf("分散    = %10.3f\n", v);
    printf("標準偏差 = %10.3f\n", s);

    // リスト6.8の計算方法
    double sumM = 0.0, sumV = 0.0;

    for ( i = 0; i < 33; i++ ) {
        sumM += d[i];
        sumV += d[i] * d[i];
    }

    m = sumM / 33;
    v = sumV / 33 - m * m;
    s = sqrt(v);

    printf("リスト6.8での計算方法を使用\n");
    printf("平均    = %10.3f\n", m);
    printf("分散    = %10.3f\n", v);
    printf("標準偏差 = %10.3f\n", s);

    return 0;
}