#include <stdio.h>

int main(void){
    int money = 5000;
    int price = 390;
    int date = 0;

    printf("チャージ額： %d円\n", money);

    while( money >= 0 ) {
        printf("%d日目残額 %d円\n", date, money);

        money -= price;
        date ++;
    }

    return 0;
}