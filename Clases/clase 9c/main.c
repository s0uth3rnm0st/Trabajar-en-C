#include <stdio.h>
#include <stdlib.h>
#include "producto.h"


int main()
{
    eProducto unProducto; //defino
    unProducto=pedirProducto(); //unProducto es igual al retorno de la func pedirProducto
    mostrarProducto(unProducto);

    eProducto listadoDeProductos[3];


    cargarArray(3, listadoDeProductos);

    //construirArray();


    return 0;
}
