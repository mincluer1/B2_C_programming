#include <stdio.h>

int main( void ){
	int n;

	scanf( "%d", &n );

    if ( n % 15 == 0 ){
        printf("15�̔{��");
    }
    else if ( n % 5 == 0 ){
        printf("�T�̔{��");
    }
    else if ( n % 3 == 0 ){
        printf("�R�̔{��");
    }
    else{
        printf("������ł��Ȃ�");
    }


	return 0;
}
 