#include <stdio.h>

int main( void )
{
	int i;
	int a[4];
	a[0] = 100;
	a[1] = 101;
	a[2] = 102;
	a[3] = 103;

    printf("%p", &i);
    printf("\n");

    printf("%p", &a[0]);
    printf("\n");
    printf("%p", &a[1]);
    printf("\n");
    printf("%p", &a[2]);
    printf("\n");
    printf("%p", &a[3]);
    printf("\n");
    
    printf("%p", &a);
    printf("\n");
    printf("%p", &a+1);
    printf("\n");
    printf("%p", &a+2);
    printf("\n");
    printf("%p", &a+3);
    printf("\n");


    printf("%d", i);
    printf("\n");

    printf("%d", a[0]);
    printf("\n");
    printf("%d", a[1]);
    printf("\n");
    printf("%d", a[2]);
    printf("\n");
    printf("%d", a[3]);
    printf("\n");
    
    printf("%d", *a);
    printf("\n");
    printf("%d", *a+1);
    printf("\n");
    printf("%d", *a+2);
    printf("\n");
    printf("%d", *a+3);

	printf("\n");

	return 0;
}