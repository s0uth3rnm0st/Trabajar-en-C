#include <stdio.h>
#include <stdlib.h>
#define T 5

/**hacer un destructor con free, demas setters y getters, hacer un array de empleados*/

typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;
}eEmployee;

eEmployee* nuevoEmpleado(); //constructor por defecto
eEmployee* nuevoEmpleadoParametros(int, char*, float);
void mostrarEmpleado(eEmployee*);
int setLegajo(eEmployee*,int);
int getLegajo(eEmployee*);//devuelve el tipo de dato asociado con el campo

int main()
{
    //eEmployee* unEmpleado //= (eEmployee*) malloc(sizeof(eEmployee)); //consigo espacio en mem para unEmpleado, PERO SE NECESITA HACER ESTO EN UNA FUNC
    eEmployee* unEmpleado=nuevoEmpleadoParametros(1000,"Pedro",10000);
    eEmployee* otroEmpleado = nuevoEmpleadoParametros(1001,"Maria",2000);

    //no esta muy bien usar ->, malloc, calloc, etc en el main (encapsulamiento)

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);

    if(getLegajo(unEmpleado)==1000) //poner otroEmpleado para ver a maria
    {
        mostrarEmpleado(unEmpleado);
    }

    return 0;
}

eEmployee* nuevoEmpleado()
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = (eEmployee*) calloc(sizeof(eEmployee),1);
    return empleadoRetorno;
}

void mostrarEmpleado(eEmployee* unEmpleado)
{
    int isNull;
    if(unEmpleado!=NULL)
    {
        printf("%d--%s--%.2f\n",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
        isNull=0;
    }
}

eEmployee* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = nuevoEmpleado();
    if(empleadoRetorno!=NULL)
    {
        setLegajo(empleadoRetorno,legajo); //se usa el setter para no usar "->" aca
        strcpy(empleadoRetorno->nombre,nombre);
        empleadoRetorno->sueldo=sueldo;
    }
    return empleadoRetorno;
}

int setLegajo(eEmployee* this, int legajo)
{
    int esCorrecto=0;
    if(this!=NULL && legajo>=1000)
    {
        this->legajo=legajo;
        esCorrecto=1;
    }
}

int getLegajo(eEmployee* pEmpleado)
{
    int retornoLegajo=0;
    if(pEmpleado!=NULL)
    {
        retornoLegajo=pEmpleado->legajo;
    }
    return retornoLegajo;
}
