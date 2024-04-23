#include <stdio.h>

int main(void){
    int num = 2985;
    int i, j;
    int input_num;

    for ( i = 0, j = 20; i < 30; i++, j-- ) {
        printf("%d回目の数字をどうぞ ? >>> ", i + 1);

        scanf("%d", &input_num);

        if ( input_num > num ){
            printf("大きいです ! チャンスはあと%d回\n\n", j);
        } else if ( input_num < num ) {
            printf("小さいです ! チャンスはあと%d回\n\n", j);
        } else {
            printf("\n\n ******************** \n");
            printf(" * %d回目で大正解 * \n", i+1);
            printf(" ******************** \n");
            break;
        }
    }

    return 0;
}