#include <stdio.h>

void swap(int *, int *);
void sort2(int *, int *);

int main(void) {
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    sort2(&x, &y);
    printf("x=%d\ty=%d\n", x, y);

    return 0;
}

void sort2(int *a, int *b) {
    int temp;

    if ( *b <= *a ) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}