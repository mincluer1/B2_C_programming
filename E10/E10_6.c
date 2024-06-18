#include <stdio.h>

#define FULL 10
#define N 53  /*  使用しない場合は削除すること */

int main ( void ) 
{
	int i;
	int a;
	int freq[ FULL+1 ] = { 1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4 };    /* 点数が i である学生の人数を格納する配列 freq */

	printf("enter the 1st score:");
	scanf("%d", &a);
	// ここで度数分布を更新
    freq[a] = freq[a] + 1;

	printf("enter the 2nd score:");
	scanf("%d", &a);
	// ここで度数分布を更新
    freq[a] = freq[a] + 1;

	printf("enter the 3rd score:");
	scanf("%d", &a);
	// ここで度数分布を更新
    freq[a] = freq[a] + 1;

	// 度数分布の確認
	for( i = 0; i < FULL+1; i++ )
		printf( "%d: %d\n", i, freq[ i ] );

    int tmp_cnt = 0;
    int now_mode_cnt = 0;
    int mode = 0;

    for ( i = 0; i < FULL+1; i++ ) {
        tmp_cnt += freq[i];

        if ( tmp_cnt >= 27 ) {
            printf("中央値: %d\n", i);
            break;
        }
    }

    for ( i = 0; i < FULL+1; i++ ) {
        if ( now_mode_cnt < freq[i] ) {
            mode = i;
            now_mode_cnt = freq[i];
        }
    }

    printf("最頻値: %d\n", mode);

	return 0;

}