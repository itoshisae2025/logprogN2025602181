#include <stdio.h>

int main()
{
    int x,y;
    x= 2;
    y= 4;
    float z= ((float)1/x) + (x + y/3) + ((float)2*(x/y));
    printf("El valor de Z es: %.1f", z);
    return 0;
}
