#include <math.h>
#include <stdio.h>

int main(void){

    int m, n;

	scanf( "%d", &m );
	scanf( "%d", &n );


    int i = m;
   
    printf("         逆数    ２乗    平方根\n");
    printf("-------------------------------\n");

    while ( i <= n ){
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        
        printf("%5.1f   %5.3f   %6.1f   %6.4f\n", value, a, b, c);
        
        i = i + 1;
    }

    return 0;
}