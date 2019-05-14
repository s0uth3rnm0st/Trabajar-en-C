#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

#define TAM 20
/*
1.todos los productos con su provedor
2.por cada producto sus productos
3.por cada proveedor la cantidad de productos
4.el precio prpomedio de los productos de cada proveedor
5. el/los proveedor/es que proves mas productos
*/
int main()
{
    int opcion;
    eProducto producto[TAM];
    eProvedor provedor[3];




    cargarEnCero(producto , TAM);
    inicializarProductos(producto);
    inicializarProvedor(provedor);
    do{
            printf("1.ALTA\n2.BAJA\n3.MODIFICACION\n4.MOSTRAR\n5.SALIR ");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                insertProducto(TAM,producto,provedor);
                break;
            case 2:
                borrarProducto(TAM, producto);
                break;
            case 3:
                editarProducto(TAM,producto);
                break;
            case 4:
                mostrarTodo( producto,  TAM ,  provedor, 3);
                break;
            }
    }while(opcion!=10);
    return 0;
}
