#include <stdio.h>
#define MAX_DATA 10

int main(void) {
    // list 8-8
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int i;

    // list 8-9
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    int sum;
    int *p;

    p = &a[0];
    sum = 0;

    // list 8-8
    // for ( i = 0; i < MAX_DATA; i++ ) {
    //     sum += *(p + i);
    // }

    // list 8-9
    while (*p) {
        sum += *p++;
    }

    printf("合計 = %d\n", sum);

    return 0;
}