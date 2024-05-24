#include <math.h>
#include <stdio.h>

double deg_to_rad(int x){
    return x * M_PI/ 180;
}
double sc(int x)
{
    return 2*sin(deg_to_rad(x))+cos(2*deg_to_rad(x));
}
int main(void)
{
    int a;

    for(a=0;a<=360;a+=15)
    {
        printf("%d度 %fラジアン %f\n",a,deg_to_rad(a),sc(a));
    }
    return 0;
}