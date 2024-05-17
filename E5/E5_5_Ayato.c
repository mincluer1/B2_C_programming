#include<stdio.h>//できてない
#include<math.h>

int gcd(int a, int b){
    int z;
    while((z=a%b)!=0){
        a =b;
        b =z;
    }
    return b;
}

int main(void){
    int s,t,x,y;
    int cnt;
    x = 0;
    y = 0;
    cnt=0;
    printf("s>>>");
    scanf("%d",&s);
    printf("t>>>");
    scanf("%d",&t);
    if(s>t){
        printf("違う値を入力してください");
        printf("t>>>");
        scanf("%d",&t);
    }

    //printf("\n%d",s);
    //printf("\n%d",t);

    for(int i=s;i<=t;i++){
        if(gcd(i,i)==1){
            printf("(%d,%d)",i,i);
            cnt++;
        }
    }
    printf("\n合計%d組",cnt);

    return 0;
}