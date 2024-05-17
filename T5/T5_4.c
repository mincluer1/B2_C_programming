#include <stdio.h>
#include <math.h>

double sqrt_sum(double x, double y) {
    return sqrt(x * x + y * y);
}

double distance(double x1, double y1, double x2, double y2 ) {
    double dist = sqrt_sum(x1-x2, y1-y2);
    return dist;
}

int main(void) {
    double x, y;
    double z1, z2;

    scanf("%lf", &x);
    scanf("%lf", &y);
    
    z1 = distance(0.0, 10.0, x, y);
    z2 = distance(10.0, 0.0, x, y);
    
    if ( z1 < z2 ) {
        printf("(0.0, 10.0)");
    } else if ( z1 == z2 ) {
        printf("(0.0, 10.0), (10.0, 0.0)");
    } else {
        printf("(10.0, 0.0)");
    }

    return 0;
}