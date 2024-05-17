#include <stdio.h>

int main(void) {
    int i;
    int array[4];
    array[0] = 80;
    array[1] = 75;
    array[2] = 50;
    array[3] = 90;

    scanf("%d", &i);
    printf("%d\n",array[i-1]);

    return 0;
}