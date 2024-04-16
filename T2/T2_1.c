#include <stdio.h>

int main( void ){
	int x;

	scanf("%d", &x);

    if (x == 20)
        printf("はたちです\n");
    if (x != 60)
        printf("還暦ではありません\n");
    if (x >= 18)
        printf("成人です\n");

	return 0;
}