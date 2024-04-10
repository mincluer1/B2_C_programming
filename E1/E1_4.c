#include <stdio.h>

int main(void){
    int s, t, u;
    double x;

    s = 34;
    t = 8;

    u = s / t;
    printf("u = %d\n", u);
    printf("u = %f\n", u);

    x = (double)s / t;
    printf("x = %f\n", x);

    return 0;
}