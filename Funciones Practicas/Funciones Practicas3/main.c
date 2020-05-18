#include <stdio.h>
#include <stdlib.h>
#include "string.h"
typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

} Notebook;

#define TAM 5
void ordenarArray(Notebook* lA,int tam);
void mostrarDatos(Notebook* lD,int tam);
void mostrarInfo(Notebook lI,int tam);

int main()
{
    Notebook computadoras[TAM] = {
    {1941,"athlon 200ge","AMD",78.000},
    {7773,"atom 330","Ryzen",15.555 },
    {8989,"intel i9 9900k","Hp",36.270},
    {8999,"ideapad s340","Lenovo",99.200},
    {9989,"X543","Asus",91.978}
    };
    return 0;
}
void ordenarArray(Notebook* lA,int tam)
{
    Notebook auxNotebook;
    for(int i = 0; i < tam -1 ;i++)
    {
        for(int j = i+1; j <tam;j ++)
        {
               if(strcmp(lA[i].marca,lA[j].marca) == 1)
               {
                 auxNotebook = lA[i];
                 lA[i] = lA[j];
                 lA[j] = auxNotebook;
               }
               else if(strcmp(lA[i].marca,lA[j].marca) == 0 && lA[i].precio < lA[j].precio )
               {
                 auxNotebook = lA[i];
                 lA[i] = lA[j];
                 lA[j] = auxNotebook;
               }
        }
    }
}

