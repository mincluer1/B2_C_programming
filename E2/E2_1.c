#include <stdio.h>

int main(void){
	int math, eng;

	scanf( "%d\n", &math );
	scanf( "%d\n", &eng );

    if ( math >= 80 && math < 90 ){
        printf("���w�͗D�ł�\n");
    }
    if ( math < eng ){
        printf("�p��̂ق������ӂł�\n");
    }
    if ( math < 60 || eng < 60 ){
        printf("�w�K�s���ł�\n");
    }

	return 0;
}
 