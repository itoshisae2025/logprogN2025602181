#include <stdio.h>
#include <math.h>

int main()
{
    const float Preciom2=9256, iva=0.16;
    float area, Costoiva, Iva, total;
    printf("Cuanta area cuadrada compro?");
    scanf("%f", &area);
    Costoiva= area * Preciom2;
    Iva= Costoiva * iva;
    total= Costoiva + Iva;
    printf("Costosiva: %.2f\n", Costoiva);
    printf("Iva: %.2f\n", Iva);
    printf("Total: %.2f\n", total);
    return 0;
}
