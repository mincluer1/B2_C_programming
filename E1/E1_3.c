#include <stdio.h>

int main(void){
    int d;
    int h;
    int m;
    int s;
    int t;

    d = 5;
    h = 22;
    m = 54;
    s = 41;
    t = 86400 * d + 3600 * h + 60 * m + s;
    printf("%d��%d����%d��%d�b��%d�b�ł�\n", d, h, m, s, t);

    return 0;
}
