#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int precio;
    int PrecioFinal;

    printf("ingrese valor");
    scanf("%d", &valor);

    precio = valor * 0.05;

    PrecioFinal = valor + precio;

    printf("%d", PrecioFinal);

    return PrecioFinal;
}
