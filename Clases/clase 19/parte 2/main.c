#include <stdlib.h>
#include "empleado.h"
#define T 5

/**hacer un destructor con free, demas setters y getters, hacer un array de empleados*/



int main()
{
    //eEmployee* unEmpleado //= (eEmployee*) malloc(sizeof(eEmployee)); //consigo espacio en mem para unEmpleado, PERO SE NECESITA HACER ESTO EN UNA FUNC
    eEmployee* unEmpleado=nuevoEmpleadoParametros(1000,"Pedro",10000);
    eEmployee* otroEmpleado = nuevoEmpleadoParametros(1001,"Maria",2000);

    //no esta muy bien usar ->, malloc, calloc, etc en el main (encapsulamiento)

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);

    printf("\nFiltro (id=1000):\n");
    if(getLegajo(unEmpleado)==1000) //poner otroEmpleado para ver a maria
    {
        mostrarEmpleado(unEmpleado);
    }
    printf("\n");

    int opcion;
    printf("presiones 1 para borrar a pedro: ");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
        employee_free(unEmpleado);
        printf("aqui quedo basura al hacer borrado fisico: ");
        mostrarEmpleado(unEmpleado);
            break;

        default:
        printf("error, pedro sigue aqui: ");
        mostrarEmpleado(unEmpleado);
            break;

    }

    return 0;
}


