#include <stdio.h>
#include <math.h>
int main()
{
    int l=7;
    float pt= (23.0/5*l) + (3.1416*l/2);
    float at= (l*l) + 2*(1.0/5*l*3.0/5*l) + 2*(1.0/5*l*1.0/5*l) + 3.1416 * pow(l/2.0,2)/2;
    printf("El Perimetro Total de la figura es: %.4f\n", pt);
    printf("El Area Total de la figura es: %.4f\n", at);
    return 0;
}
