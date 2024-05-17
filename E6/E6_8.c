#include <stdio.h>

int main(void) {
    int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d;
    int date_cnt = 0;

    printf("月を入力 >");
    scanf("%d", &m);
    printf("日を入力 >");
    scanf("%d", &d);

    for ( int i = 0; i < m; i++ ) {
        date_cnt += month[i];
    }

    date_cnt += d;

    printf("%d月%d日 → %d日目\n", m, d, date_cnt);
    return 0;
}