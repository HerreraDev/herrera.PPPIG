#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "dataWarehouse.h"


int ordenarNotebooks(eNotebook lista[], int tam)
{
    eNotebook auxNote;
    int exito = 0;
    for(int i = 0; i < tam - 1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {
            if(strcmp(lista[i].marca, lista[j].marca) > 0)
            {
                auxNote = lista[i];
                lista[i] = lista[j];
                lista[j] = auxNote;
            }
            else if(strcmp(lista[i].marca, lista[j].marca) == 0 && lista[i].precio < lista[j].precio)
            {
                auxNote = lista[i];
                lista[i] = lista[j];
                lista[j] = auxNote;
            }
            exito = 1;
        }
    }
    return exito;
}

void hardcodearNotes(eNotebook noteb[], int tammnote)
{
    for(int i = 0; i < tammnote; i++)
    {
        noteb[i].id = idsNotes[i]; //uso los datos pregarcados de la libreria dataWarehouse
        strcpy(noteb[i].marca, marcas[i]);
        strcpy(noteb[i].procesador, procesadores[i]);
        noteb[i].precio = precios[i];
    }
}

void mostrarNotebook(eNotebook note)
{
    printf("%2d     %10s     %10s     %.2f\n",note.id,note.procesador,note.marca,note.precio);
}

void mostrarNotebooks(eNotebook notes[],int tammnote)
{
    printf("ID      PROCESADOR       MARCA         PRECIO\n");
    for(int i = 0; i < tammnote; i++)
    {
        mostrarNotebook(notes[i]);
    }
}
