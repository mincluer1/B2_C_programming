#include <stdio.h>

int main(void){
	int math, eng;

	scanf( "%d\n", &math );
	scanf( "%d\n", &eng );

    if ( math >= 80 && math < 90 ){
        printf("数学は優です\n");
    }
    if ( math < eng ){
        printf("英語のほうが得意です\n");
    }
    if ( math < 60 || eng < 60 ){
        printf("学習不足です\n");
    }

	return 0;
}
 