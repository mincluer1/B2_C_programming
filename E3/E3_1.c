#include <stdio.h>

int main(void){
    int total = 0;
    int n;

    scanf("%d", &n);


    for ( int i = 0; i <= n; i+=3 ) {
        total += i;
    }

    printf("%d", total);

    return 0;
}