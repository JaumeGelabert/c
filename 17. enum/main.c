#include <stdio.h>

enum Dia
{
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo
};

int main()
{

    enum Dia hoy = Domingo;

    if (hoy == Sabado || hoy == Domingo)
    {
        printf("Es fin de semana!\n");
    }
    else
    {
        printf("Es entre semana...\n");
    }

    return 0;
}