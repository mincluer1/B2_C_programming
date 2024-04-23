#include <stdio.h>

int main(void){
    int i = 1;
    int total = 0;

    // while (i < 10 ) {
    //     total = total + i;
    //     i ++;
    // }

    // printf("[境界条件が「未満」の場合]1から10までの和は%dです。変数iは、%dです。\n", total, i);

    i = 0;
    int t = 0;
    total = 0;

    scanf("%d", &t);

    while ( i <= t ) {
        total = total + i * i;
        i ++;
    }

    // printf("[境界条件が「以下」の場合]1から10までの和は%dです。変数iは、%dです。\n", total, i);
    printf("i = %d のとき、２乗の和は %d である\n", t, total);

    return 0;
}