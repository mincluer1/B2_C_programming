#include <stdio.h>

int main( void ){
	int n;

	scanf( "%d", &n );

    if ( n % 15 == 0 ){
        printf("15‚Ì”{”");
    }
    else if ( n % 5 == 0 ){
        printf("‚T‚Ì”{”");
    }
    else if ( n % 3 == 0 ){
        printf("‚R‚Ì”{”");
    }
    else{
        printf("‚¢‚¸‚ê‚Å‚à‚È‚¢");
    }


	return 0;
}
 