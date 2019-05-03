#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"

int main()
{
    //definir array.
    //cargar array.
    //mostrar array.

    eProducto producto[10];
    eProveedor proveedor[10];
    inicializarProductos(producto, 3);
    inicializarProveedores(proveedor, 3);
    mostrarTodo( producto,  10 ,  proveedor, 3);

/*  1. todos los productos con su proveedor
    2. por cada proveedor sus productos
    3. por cada proveedor la cantidad de productos
    4. el precio promedio de los productos de cada proveedor
    5. el/los proveedores que provee mas productos (maximo)
*/
    return 0;
}
