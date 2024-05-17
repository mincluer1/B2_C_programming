#include<stdio.h>//できてない
#include <math.h>


double fact(double n){//階乗を求める関数の定義
    double i,fact;
    fact =1;
    for(i=1;i<=n;i++){
        fact *=i;           //n!を求める  
    }
    return fact;
}

double myexp(double x){
    double ex;
    int y;
    y=1;
    ex=1.0;
    while(1){
        ex += pow(x,y)/fact(y);
        if((pow(x,y)/fact(y))<pow(10,-6)){
            break;
        }
         y++;
    }
    return ex;
}

int main(void){
    double x,total;
    // double n,m;
    // n=4.0;
    // m=fact(n);
    // printf("%lf",m);
    printf("\n  x\t   tmyexp(x)");
    for(int i=1;i<=10;i++){
        x =(double)i;
        total =myexp(x);
        printf("\n%6.1f%15.5f",x,total);
    }
    return 0;
}