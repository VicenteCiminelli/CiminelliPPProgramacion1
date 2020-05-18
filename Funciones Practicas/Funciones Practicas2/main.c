#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
            i++;
    }
    return contador;
}
