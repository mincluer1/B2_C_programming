#include <stdio.h>

int main(void)
{
	int i, cnt;  /* cnt は，個数を数えるための変数 */
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	cnt = 0;     /* cnt を初期化 */

    for ( int i = a; i <= b; i ++ ) {
        if ( i % 3 != 0 && i % 5 != 0 ) {
            cnt++;
        }
    }

	printf( "答えは %d 個です\n", cnt );

	return 0;
}