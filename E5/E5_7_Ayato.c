#include<stdio.h>//できてない
#include <math.h>


double mycbrt(double x){
    const double eps =1.0e-10;
    double guess =1.0;
    double guess_calc;

    while( fabs( guess * guess * guess - x ) >= eps ){
        guess_calc = ( 2.0 * guess ) + ( x / ( guess * guess ));
        guess = guess_calc / 3.0;
        printf("%.10f\n",guess);
       
    }
    return guess;
}

int main(void){
    double x;
    scanf("%lf",&x);
    mycbrt(x);

    // printf("x\tr\tr*r*r");
    // for(double i=1;i<=10;i++){
        // printf("%2.1f\t%.10f\t%.10f",i,mycbrt(i),pow(mycbrt(i),3));
    // }
    return 0;
}