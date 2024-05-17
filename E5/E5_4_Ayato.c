#include <stdio.h>//わからん
#include <math.h>

double powdbl(double q, int m){//qのm乗
    int y =1;
    while(m-- >0){
        y *=q;              
    }
    return y;
}

int fact(int n){//階乗を求める関数の定義
    int i,fact;
    fact =1;
    for(i=1;i<=n;i++){
        fact *=i;           //n!を求める  
    }
    return fact;
}

int combi(int n,int r){//nCrを求める関数
    return fact(n) / (fact(r) * fact(n-r));
}

int main(void){
    int n;
    double p;
    printf("12以下の整数を入力してください＞＞＞");
    scanf("%d",&n);
    printf("1.0未満の実数を入力してください＞＞＞");
    scanf("%lf",&p);
    
    //printf("\n2の3乗%lf",powdbl(2,3));
    //printf("\n10C2 %d",combi(10,2));


    for(int i=0;i<=n;i++){
        printf("\ni=%d, %lf",i,combi(n,i)*powdbl(p,i)*powdbl(1-p,n-i));
    }

    return 0;
}