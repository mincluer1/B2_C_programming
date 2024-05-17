#include <stdio.h>
#include <math.h>

double deg_to_rad(int x) {
    double rad = x * M_PI / 180;
    return rad;
}

double sc(int x) {
    return 2*sin(deg_to_rad(x)) + cos(2 * deg_to_rad(x));
}

int main(void) {
    printf("角度\tラジアン\t2sin(x) + cos(2x)\n");
    for ( int i = 0; i <= 360; i += 15 ) {
        printf("%d\t%lf\t%lf\n", i, deg_to_rad(i), sc(i));
    }
    return 0;
}