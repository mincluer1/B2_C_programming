#include <stdio.h> //できてない
// #include <math.h>
int main(void)
{
    int n;
    n = 0;
    int a[50] = {75, 44, 98, 76, 42, 87, 64, 88, 78, 55, 91, 69, 47, 84, 75, 63, 81, 29, 42, 53, -1};
    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", a[i]);
        if (a[i] == -1)
        {
            break;
        }
        n++;
    }
    printf("%d人", n);
    return 0;
}