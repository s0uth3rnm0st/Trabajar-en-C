#include <stdlib.h>
#include "empleado.h"
#define T 10

/**hacer un destructor con free, demas setters y getters, hacer un array de empleados*/



int main()
{
    //eEmployee* unEmpleado //= (eEmployee*) malloc(sizeof(eEmployee)); //consigo espacio en mem para unEmpleado, PERO SE NECESITA HACER ESTO EN UNA FUNC
    eEmployee* unEmpleado=nuevoEmpleadoParametros(1000,"Pedro",10000);
    eEmployee* otroEmpleado = nuevoEmpleadoParametros(1001,"Maria",2000);
    eEmployee* empleadoArray;

    //no esta muy bien usar ->, malloc, calloc, etc en el main (encapsulamiento)

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);

    printf("\nFiltro (id=1000):\n");
    if(getLegajo(unEmpleado)==1000) //poner otroEmpleado para ver a maria
    {
        mostrarEmpleado(unEmpleado);
    }
    printf("\nFiltro (sueldo=2000):\n");
    if(getSueldo(otroEmpleado)==2000)
    {
        mostrarEmpleado(otroEmpleado);
    }
    /*printf("\nFiltro (nombre=Pedro):\n");
    if(getNombre(unEmpleado)==1)
    {
        mostrarEmpleado(unEmpleado);
    }
    printf("\n");*/

   /* while(getNombre(empleadoArray)==0)
    {
        printf("error");
    }*/
    char nombre[50];
    getString("ingrse un nombre: ",empleadoArray->nombre);

    printf("%s\n",empleadoArray->nombre);

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


