#include <stdio.h>
#include <math.h>

int main(void) {
    int t;
    double sine, cosine, rad;

    printf("三角関数\n");
    printf(" t           sin            cos\n");

    for ( t = 0; t <= 90; t += 15 ){
        rad = ( t * 3.1415926 ) / 180.0;
        double sine = sin(rad);
        double cosine = cos(rad);
        printf(" %d        %6.4f        %6.4f\n", t, sine, cosine);
    }

    return 0;
}