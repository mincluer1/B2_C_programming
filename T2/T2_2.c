#include <stdio.h>

int main(void){
    int x;

    scanf("%d", &x);

    if ( x >= 2019 && x <= 2024 )
        printf("令和です\n");
    if ( x == 2018 )
        printf("令和か平成です\n");
    if ( x < 2018 || x >= 2025 )
        printf("年号は不明です\n");

    return 0;
}