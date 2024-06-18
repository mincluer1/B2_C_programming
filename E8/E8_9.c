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

void str_reverse_copy(char dst[], char src[]) {
    int i = 0;
    unsigned int len  = (unsigned int)strlen(src);

    for ( i = 0; i < len; i++ ) {
        dst[i] = src[len-i-1];

        if (i == len-1) {
            dst[len] = '\0';
            return;
        }

    }
}

int main(void) {
    char str[256];
    char reverse[256];

    printf("メッセージを入力してください >>> ");
    get_line(str, 256);

    str_reverse_copy(reverse, str);

    printf("%s\n", reverse);

    return 0;
}