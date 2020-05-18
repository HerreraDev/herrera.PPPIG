#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

#endif // NOTEBOOK_H_INCLUDED

int ordenarNotebooks(eNotebook lista[], int tam);

void hardcodearNotes(eNotebook noteb[], int tammnote);

void mostrarNotebook(eNotebook note);

void mostrarNotebooks(eNotebook notes[],int tammnote);
