#include <stdio.h>

int main(void){
    int x;

    scanf("%d", &x);

    if ( x % 7 == 0 )
        printf("7の倍数です\n");
    else
        printf("７の倍数ではない\n");

    return 0;
}