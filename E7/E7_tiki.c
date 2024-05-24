#include <math.h>
#include <stdio.h>

long long sum2(int n){
    long long count2 = 0;
    count2 = n * ( n + 1 );
    count2 =  count2 / 2;
    // printf("%lld", count2);
    return count2;
}

int main(void) {
    printf("%lld",sum2(50000));
    return 0;
}