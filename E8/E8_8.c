#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size)
{
	int i, c;

	for (i = 0; i < size - 1; i++)
	{
		c = getchar();
		if (c == EOF || c == '\n') break;
			buff[i] = c;
	}
	buff[i] = '\0';
}

int main(void) {
    char str[256];
    unsigned int len;
    int large_cnt = 0;
    int small_cnt = 0;
    int num_cnt = 0;
    int other_cnt = 0;

    printf("メッセージを入力してください >>> ");
    get_line(str, 256 );

    len = (unsigned int)strlen(str);

    for ( int i = 0; i < len; i++ ) {
        if ( str[i] >= 65 && str[i] < 90 ) {
            large_cnt++;
        } else if ( str[i] >= 97 && str[i] < 123 ) {
            small_cnt++;
        } else if ( str[i] >= 48 && str[i] < 58 ) {
            num_cnt++;
        } else {
            other_cnt++;
        }
    }

    printf("長さ %d,大文字 %d,小文字 %d,数字 %d, その他 %d\n", len, large_cnt, small_cnt, num_cnt, other_cnt);

    return 0;
}