#include <stdio.h>
#include <stdbool.h>

#define MAX 15

// Definición de la estructura tQueue (cola)
typedef struct
{
  int A[MAX];
  int nElem;
} tQueue;

// Inicializamos la cola, vacía
void initCola(tQueue *q)
{
  q->nElem = 0;
}

// Insertar un elemento a la cola (al final)
void insertCola(tQueue *q, int e)
{
  if (q->nElem == MAX)
  {
    printf("La cola está llena \n");
  }
  else
  {
    /*
     Añadimos e en la posición n. Luego n++ para tener la siguiente posición
     libre y poder añadir el siguiente elemento a la cola en la posición correcta.
    */
    q->A[q->nElem] = e;
    q->nElem++;
  }
}

// Eliminar de la cola
void deleteCola(tQueue *q)
{
  int i;
  if (q->nElem == 0)
  {
    printf("La cola está vacía \n");
  }
  else
  {
    for (i = 0; i < q->nElem - 1; i++)
    {
      /*
        Lo que hacemos es asignar el valor que tiene cada elemento a su derecha,
        y por consecuencia, eliminamos el primero mientras todos avanzan una posición
        en la cola

      */
      q->A[i] = q->A[i + 1];
    }
    // Eliminamos el ultimo elemento
    q->nElem--;
  }
}

// Sabemos cual es el primer elemento de la cola
void head(tQueue q, int *e)
{
  if (q.nElem == 0)
  {
    printf("La cola está vacía \n");
  }
  else
  {
    // Asignamos a e el primer elemento de la cola, en índice 0
    *e = q.A[0];
  }
}

// Si no hay elementos en la cola, devuelve true
bool isEmptyQueue(tQueue q)
{
  return (q.nElem == 0);
}

// Si la cola está llena, devuelve true
bool isFullQueue(tQueue q)
{
  return (q.nElem == MAX);
}

// Devuelve el numero de elementos que hay en una cola
int lengthQueue(tQueue q)
{
  return (q.nElem);
}

int main()
{
  return 0;
}