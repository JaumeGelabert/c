#include <stdio.h>
#include <stdbool.h>

#define MAX 15

/*
  Es posible insertar, eliminar y consultar elementos en cualquier
  posición de la lista
*/

// Definición de la estructura tList (lista)
typedef struct
{
  int A[MAX];
  int nElem;
} tList;

// Inicialiazamos la lista
void initList(tList *l)
{
  l->nElem = 0;
}

/*
  Añadir un elemento
  Hay que tener en cuenta que al poder añadir un nuevo elemento a la
  lista en cualquier posición, deberemos mover los elementos con índice
  igual o superior a la posición en la que queremos añadir el nuevo
  elemento, un lugar hacia abajo en la lista (el índice debe aumentar en 1)
*/
void insert(tList *l, int e, int index)
{
  int i;
  if (l->nElem == MAX)
  {
    printf("La lista esta llena \n");
  }
  else
  {
    for (i = l->nElem - 1; i >= index; i--)
    {
      l->A[i + 1] = l->A[i];
    }
    l->nElem++;
    l->A[index] = e;
  }
}

// ... otros

int main()
{
  return 0;
}