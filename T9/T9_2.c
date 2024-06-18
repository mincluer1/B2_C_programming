#include <stdio.h>

int main (void)
{
	int a = 1234;
	int b = 5678;
	int c = 7777;

    int *pa;
    int *pb;
    int *pc;

    pa = &a;
    pb = &b;
    pc = &c;

	/* ここに a, b, c のアドレスを表示する文を追加 */
    printf("Address = %p\n", pa);
    printf("Address = %p\n", pb);
    printf("Address = %p\n", pc);

	return 0;
}