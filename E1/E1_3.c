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
    printf("%d“ú%dŠÔ%d•ª%d•b‚Í%d•b‚Å‚·\n", d, h, m, s, t);

    return 0;
}
