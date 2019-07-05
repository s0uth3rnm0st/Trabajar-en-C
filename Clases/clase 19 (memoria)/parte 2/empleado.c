#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"
#include "biblioteca.h"

eEmployee* nuevoEmpleado()
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = (eEmployee*) calloc(sizeof(eEmployee),1);
    return empleadoRetorno;
}

eEmployee* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = nuevoEmpleado();
    if(empleadoRetorno!=NULL)
    {
        setLegajo(empleadoRetorno,legajo); //se usa el setter para no usar "->" aca
        setNombre(empleadoRetorno,nombre);
        setSueldo(empleadoRetorno,sueldo);
    }
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

/****************************************************************************************/
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

int setNombre(eEmployee* this, char* nombre)
{
    int esCorrecto=0;
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        esCorrecto=1;
    }
}

int getNombre(eEmployee* pEmpleado)
{
    int retornoNombre=0;
    if(pEmpleado!=NULL)
    {
        if(getString("ingrese el nombre: ",pEmpleado->nombre)==0)
        {
            retornoNombre=0;
        }
        else
        {
            retornoNombre=1;
        }
    }
    return retornoNombre;
}

int setSueldo(eEmployee* this, float sueldo)
{
    int esCorrecto=0;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        esCorrecto=1;
    }
}

int getSueldo(eEmployee* pEmpleado)
{
    int retornoSueldo=0;
    if(pEmpleado!=NULL)
    {
        retornoSueldo=pEmpleado->sueldo;
    }
    return retornoSueldo;
}
/****************************************************************************************/

void employee_free(eEmployee * this)
{
    free(this);
}
