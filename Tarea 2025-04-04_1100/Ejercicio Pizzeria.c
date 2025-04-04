#include <stdio.h>

 int main()

 {
    int tipoPizza, ingredienteExtra;
        printf("Bienvenido a PIZZERIA BELLA NAPOLI\n");
        printf("Tipo de Pizza\n");
        printf("1. Pizza Vegetariana\n");
        printf("2. Pizza No Vegetariana\n");
        printf("Seleccione la opcion que guste:\n");
        scanf("%d", &tipoPizza);

        printf("Las Pizzas llevan Mozzarella y Tomate\n");

    if (tipoPizza == 1)
    {
        printf("Ingredientes Vegetarianos\n");
        printf("1. Pimiento\n");
        printf("2. Tofu\n");
    }
    else
    {
        printf("Ingredientes No Vegetarianos\n");
        printf("1. Peperoni\n");
        printf("2. Jamon\n");
        printf("3. Salmon\n");
    }

        printf("Seleccione el Ingrediente Extra:\n");
        scanf("%d", &ingredienteExtra);
        printf("Su Pizza es:\n");

    if (tipoPizza == 1)
    {
        printf("Vegetariana, lleva Mozzarella, Tomate, ");

            if (ingredienteExtra == 1)
                {
                printf("Pimiento\n");
                }

            else if (ingredienteExtra == 2)
                {
                printf("Tofu\n");
                }

    }

    else
    {
        printf("No Vegetariana, lleva Mozzarella, Tomate, ");

            if (ingredienteExtra == 1)
                {
                printf("Peperoni\n");
                }

            else if (ingredienteExtra == 2)
                {
                printf("Jamon\n");
                }

            else if (ingredienteExtra == 3)
                {
                printf("Salmon\n");
                }

    }

   return 0;
 }
