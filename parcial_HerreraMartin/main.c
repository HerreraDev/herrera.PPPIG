#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"

#define TAM 10

float aplicarDescuento(float precio);

int contarCaracteres(char cadena[], char letra);


int main()
{
    /////////////EJERCICIO 1
    float precio = 100;
    float conDescuento;
    printf("Precio sin descuento: %.2f\n\n",precio);
    conDescuento = aplicarDescuento(precio);
    printf("Precio con el descuento del 5 porciento: %.2f \n\n",conDescuento);

    //////////////////////////////
    /////////////EJERCICIO 2
    char nombre[20] = {"Juanapepita"};
    char letra = 'p';

    int cantidadDeVeces;
    cantidadDeVeces = contarCaracteres(nombre,letra);

    printf("En la cadena: %s, se repite la letra %c la siguiente cantidad de veces: %d\n\n",nombre,letra,cantidadDeVeces);

    /////////////////////////////
    /////////////EJERCICIO 3

    eNotebook lista[TAM];
    hardcodearNotes(lista, TAM);

    ordenarNotebooks(lista, TAM);

    mostrarNotebooks(lista,TAM);




    return 0;
}

float aplicarDescuento(float precio)
{
    float precioConDescuento;
    float descuento;
    descuento = (float) (precio*5)/100;
    precioConDescuento = precio - descuento;
    return precioConDescuento;
}

int contarCaracteres(char cadena[], char letra)
{
    int contadorDeLetra = 0;
    for(int i = 0; i < strlen(cadena);i++)
    {
        if(cadena[i] == letra)
        {
            contadorDeLetra++;
        }
    }
    return contadorDeLetra;
}
