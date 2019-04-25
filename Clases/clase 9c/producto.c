#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include <string.h>

eProducto pedirProducto() /**no seria lo correcto poner tantos bloques **/
{
    eProducto productoParaRetornar;

    printf("ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("ingrese el nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("ingrese el precio: ");
    scanf("%f", &productoParaRetornar.precio);

    printf("ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaVencimiento);

    printf("ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    return productoParaRetornar;
}


void mostrarProducto(eProducto elParametroProducto) /** no seria lo correcto poner tantos printf**/
{
    printf("\n%s",elParametroProducto.codigoDeBarra);
    printf("\n%s",elParametroProducto.nombre);
    printf("\n%f",elParametroProducto.precio);
    printf("\n%s",elParametroProducto.fechaVencimiento);
    printf("\n%s",elParametroProducto.proveedor);
}

void cargarArray(int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=pedirProducto();
    }
}

void mostrarArray(int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam;i++)
    {
        mostrarProducto(listado[i]);
    }
}


void construirArray(int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        strcpy(listado[i].estado,0);
        strcpy(listado[i].nombre,"nn");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaVencimiento,"");
        strcpy(listado[i].proveedor," ");
        listado[i].precio=0;
    }
}



