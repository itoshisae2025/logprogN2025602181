#include <stdio.h>
#include <math.h>
int main()
{
    float peso, estatura, imc;

    printf("Ingrese su peso en Kg:");
    scanf("%f", &peso);

    printf("Ingrese su estatura en metros:");
    scanf("%f", &estatura);

    imc = peso / pow(estatura,2);

    printf("Su IMC es de: %.2f\n", imc);
    printf("Su categoria es:");

    if (imc > 0 && imc <= 18.4)
    {
        printf("BAJO PESO");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("PESO NORMAL");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("SOBREPESO");
    }
    else if (imc >= 30.0 && imc <= 34.9)
    {
        printf("OBESIDAD CLASE 1");
    }
    else if (imc >= 35.0 && imc <= 39.9)
    {
        printf("OBESIDAD CLASE 2");
    }
    else if (imc >= 40.0)
    {
        printf("OBESIDAD CLASE 3");
    }
    else
    {
        printf("ILOGICA");
    }

    return 0;
}
