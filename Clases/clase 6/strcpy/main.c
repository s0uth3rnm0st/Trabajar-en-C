#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[7];
    char otroNombre[50]="jose Perez";
    int largo;
    int compara;

    strupr(otroNombre); //pasa a mayusc o minusc con lwr

    strcat(nombre,otroNombre); //concatena
    //strcpy(nombre,otroNombre);//lee todo pedo desborda la memoria
    //strncpy(nombre,otroNombre,6); //le hasta "jose P"


    printf("\nsu nombre es: %s\n",nombre);
}

/*preacticar
en una var nombre
en otra apellido
en otra apellidoNombre

pasar primer letra a mayusc, coma, espacio, nombre con primera en mayusc

nombre=german ezequiel
apellido=scarafilo
apellidoNombre=Scarafilo, German Ezequiel
