#include <stdio.h>
#include <math.h>

double deg_to_rad( int x ) {
    double rad = x * M_PI / 180;
    
    return rad;
}

int main(void) {
    printf("0度は %f ラジアン\n", deg_to_rad(0));
    printf("30度は %f ラジアン\n", deg_to_rad(30));
    printf("45度は %f ラジアン\n", deg_to_rad(45));
    printf("75度は %f ラジアン\n", deg_to_rad(75));
    printf("90度は %f ラジアン\n", deg_to_rad(90));
    printf("135度は %f ラジアン\n", deg_to_rad(135));
    printf("180度は %f ラジアン\n", deg_to_rad(180));

    return 0;
}