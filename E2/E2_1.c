#include <stdio.h>

int main(void){
	int math, eng;

	scanf( "%d\n", &math );
	scanf( "%d\n", &eng );

    if ( math >= 80 && math < 90 ){
        printf("”Šw‚Í—D‚Å‚·\n");
    }
    if ( math < eng ){
        printf("‰pŒê‚Ì‚Ù‚¤‚ª“¾ˆÓ‚Å‚·\n");
    }
    if ( math < 60 || eng < 60 ){
        printf("ŠwK•s‘«‚Å‚·\n");
    }

	return 0;
}
 