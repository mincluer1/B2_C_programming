#include <stdio.h>

int main(void){
    int x;
    int total = 0;

	scanf("%d", &x);

    for (int i = 1; i <= x; i++ ) {
        total = total + i*i;
    }

    printf("1����%d�܂ł̘a��%d�ł��B\n", x, total);

    return 0;
}