#include <stdio.h>

int main( void ){
	int n;

	scanf( "%d", &n );

    if ( n % 15 == 0 ){
        printf("15の倍数");
    }
    else if ( n % 5 == 0 ){
        printf("５の倍数");
    }
    else if ( n % 3 == 0 ){
        printf("３の倍数");
    }
    else{
        printf("いずれでもない");
    }


	return 0;
}
 