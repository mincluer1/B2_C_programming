#include <stdio.h>
#include <math.h>

double area( double r, int a ) {
    double rad = a * M_PI / 360;

    return r * r * rad;
}

int main(void) {
    double x;
    int y;

    scanf("%lf %d", &x , &y);

    printf("半径が %f、中心角が %d度である扇形の面積は %.2fです。", x, y, area(x, y));

    return 0;
}