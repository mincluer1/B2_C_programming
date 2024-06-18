#include <stdio.h>

void factoring( int n, int *s, int *t, int *u ){

//  作成例：
//  計算はこの関数内で定義したローカル変数を用いて行い，
//  最後にその結果を *s = ??; のように代入
    int tmp = n;
    int tmp_s = 0, tmp_t = 0;

    while (1) {
        if ( tmp % 2 == 0 ) { 
            tmp_s ++;
            tmp /= 2;
        } else if ( tmp % 3 == 0 ) {
            tmp_t ++;
            tmp /= 3;
        } else {
            *s = tmp_s;
            *t = tmp_t;
            *u = tmp;
            break;
        }
    }    
}

int main(void)
{
	int n;
	int s, t, u;

	printf("正の整数を入力して下さい \n");
	scanf( "%d", &n );

    factoring(n, &s, &t, &u);

	printf("%d = 2^%d * 3^%d * %d \n", n, s, t, u );

	return 0;
}