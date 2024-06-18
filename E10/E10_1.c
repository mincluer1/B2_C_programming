#include <stdio.h>

int main(void) {
    int x;
    double price_5percent_cut;
    double price_100yen_cut;

    scanf("%d", &x);

    price_5percent_cut = x * 0.95;
    price_100yen_cut = x - 100;

    if ( price_5percent_cut > price_5percent_cut ) {
        printf("5パーセント引きが安い");
    } else if ( price_100yen_cut == price_5percent_cut ) {
        printf("同じ");
    } else {
        printf("100円引きが安い");
    }

    return 0;
}