#include <stdio.h>
#include <math.h>

double area( double r ){

    double s = r * r * M_PI;

    return s;
}

int main( void )
{
	double a, s;

	scanf("%lf", &a);

    s = area(a);

	printf(" 半径 %f の円の面積は %.10f \n", a, s );

	return 0;
}
 