#include <stdio.h>
#include <stdbool.h>

#define MAX 15

// Definición de la estructura tStack (pila)
typedef struct
{
  int A[MAX];
  int nElem;
} tStack;

/*
  En las operaciones push y pop, la manipulación de los elementos
  solo se hace por el extremo final de la estructura, que es lo
  mismo que la parte superior de una pila
*/

// Inicializamos la pila, vacía
void initStack(tStack *s)
{
  s->nElem = 0;
}

// Operación push: añadimos un elemento al final de la pila
void push(tStack *s, int e)
{
  // Comprobamos si está llena
  if (s->nElem == MAX)
  {
    printf("La pila está llena \n");
  }
  else
  {
    // Añadimos "e" a la pila en la posición que toca gracias a nElem
    s->A[s->nElem] = e;
    // Sumamos un elemento a nElem
    s->nElem++;
  }
}

// Operación pop: eliminamos el último elemento que se ha añadido
void pop(tStack *s)
{
  // Comprobamos que el stack no este vacio
  if (s->nElem == 0)
  {
    printf("La pila está vacia \n");
  }
  else
  {
    s->nElem--;
  }
}

// Operación top: nos dice el valor del primer elemento de la pila
void top(tStack s, int *e)
{
  if (s.nElem == 0)
  {

    printf("La pila está vacia \n");
  }
  else
  {
    // Asignamos a e el valor del último elemento de la pila
    *e = s.A[s.nElem - 1];
  }
}

// Comprobamos si la pila está vacia
bool isEmptyStack(tStack s)
{
  // Si se cumple a condición, devuelve true. Si no, false.
  return (s.nElem == 0);
}

// Comprobamos si la pila esta llena
bool isFullStack(tStack s)
{
  // Si se cumple a condición, devuelve true. Si no, false.
  return (s.nElem == MAX);
}

// Calculamos el numero de elementos de la pila
int heightStack(tStack s)
{
  return (s.nElem);
}

int main()
{
  return 0;
}