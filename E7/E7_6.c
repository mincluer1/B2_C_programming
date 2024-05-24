#include <math.h>
#include <stdio.h>

#define MIN_SEAT 10

int main(void) {
    int seat_no[ MIN_SEAT ] = { 1, 5, 8, 10, 15, 16, 20, 22, 25, 30 };
    double point[ MIN_SEAT ][ 2 ] =
    {
      { 1.1, 5.2 },
      { 3.4, 1.6 },
      { 4.5, 3.4 },
      { 2.3, 2.6 },
      { 6.4, 5.7 },
      { 7.6, 7.8 },
      { 5.2, 4.4 },
      { 1.7, 3.5 },
      { 3.8, 6.3 },
      { 5.8, 6.3 },
    };

    double x_dis, y_dis;
    double dis;
    double min_dis = 10;
    int min_dis_seat[ 2 ];
    
    int i, j;

    for ( i = 0; i < MIN_SEAT; i++ ) {
        for ( j = i + 1; j < MIN_SEAT; j++ ) {
            x_dis = point[i][0] - point[j][0];
            y_dis = point[i][1] - point[j][1];

            dis = sqrt(x_dis * x_dis + y_dis * y_dis);

            if ( min_dis > dis && dis != 0) {
                min_dis = dis;
                min_dis_seat[0] = seat_no[i];
                min_dis_seat[1] = seat_no[j]; 
            }
        }
    }

    printf("最も離れた座標は、%dと%dです(距離%8.6f)\n", min_dis_seat[0], min_dis_seat[1], min_dis);

    return 0;
}