#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
    printf("double型の最大値: %g\n", DBL_MAX);
    printf("double型の最小値: %g\n", DBL_MIN);
    printf("char型の最大値: %d\n", CHAR_MAX);
    printf("char型の最小値: %d\n", CHAR_MIN);
    printf("int型の最大値: %d\n", INT_MAX);
    printf("int型の最小値: %d\n", INT_MIN);

    return 0;
}