#include <float.h> 
#include<stdio.h>

int main(void) {
    int i, myscore;
    int max_score, min_score;
    int score[7];

    score[0] = 80;
    score[1] = 70;
    score[2] = 45;
    score[3] = 90;
    score[4] = 50;
    score[5] = 95;

    scanf("%d", &myscore);
    score[6] = myscore;

    for ( i = 0; i < 7; i ++ ) {
        if ( score[i] >= max_score ) {
            max_score = score[i];
        }

        if ( score[i] <= min_score ) {
            min_score = score[i];
        }
    }

    printf("一番点数の高い人は、%d点です。\n", max_score);
    printf("一番点数の低い人は、%d点です。\n", min_score);

    return 0;
}