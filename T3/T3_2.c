#include <math.h>
#include <stdio.h>

int main(void){

    int i = 10;
   
    printf("         逆数    ２乗    平方根\n");
    printf("-------------------------------\n");

    while ( i > 0 ){
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        
        printf("%5.1f   %5.3f   %6.1f   %6.4f\n", value, a, b, c);
        
        i --;
    }

    return 0;
}