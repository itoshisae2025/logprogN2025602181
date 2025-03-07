#include <stdio.h>
#include <math.h>
int main()
{
    int l=2;
    float pt= sqrt(pow(3.0/2*l,2) + pow(l,2)) + 2 * sqrt(pow(l,2) + pow(l,2)) + (3.0/2*l) + 2 * (1.0/4*l) + (2*l) +  l/2 + l/2;
    float at= pow(l,2) + (3.0/2*l*l)/2 + (1.0/4*l * 2*l) + 2 * (l*l)/2;
    printf("El Perimetro Total de la figura es: %.2f\n", pt);
    printf("El Area Total de la figura es: %.2f\n", at);
    return 0;
}
