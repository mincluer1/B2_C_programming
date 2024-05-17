#include <stdio.h>


int gcd(int x, int y ) {
    int z;

    while ((z = x % y ) != 0) {
        x = y;
        y = z;
    }

    return y;
}

int main(void){
    int a, b;

	printf(" a = ");	
    scanf( "%d", &a );       
	
    printf(" b = ");	
    scanf( "%d", &b );  
    
    printf("a=%d, b=%dの最大公約数は、%d", a, b, gcd(a, b));

    return 0;
}