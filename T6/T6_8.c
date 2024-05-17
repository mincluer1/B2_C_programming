#include <float.h> 
#include<stdio.h>

int main(void) {
    int i;
    double max_weight, min_weight;
    double weight[6];

    weight[0] = 72.0;
    weight[1] = 101.5;
    weight[2] = 52.4;
    weight[3] = 60.3;
    weight[4] = 140.6;
    weight[5] = 51.8;

    max_weight = -DBL_MAX;
    min_weight = DBL_MAX;

    for ( i = 0; i < 6; i ++ ) {
        if ( weight[i] >= max_weight ) {
            max_weight = weight[i];
        }

        if ( weight[i] <= min_weight ) {
            min_weight = weight[i];
        }
    }

    printf("一番重い人は、%gkgです。\n", max_weight);
    printf("一番軽い人は、%gkgです。\n", min_weight);

    return 0;
}