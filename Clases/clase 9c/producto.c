#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

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
    printf("%5s - %5s - %5f - %5s - %5s\n", elParametroProducto.codigoDeBarra, elParametroProducto.nombre, elParametroProducto.precio, elParametroProducto.fechaVencimiento, elParametroProducto.proveedor);
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
        listado[i].estado=0;
        strcpy(listado[i].nombre,"nn");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaVencimiento,"");
        strcpy(listado[i].proveedor," ");
        listado[i].precio=0;
    }
}

int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index=-1; //valor ilogico, que no este en el vec

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index=i;
            break; //ya encontre, rompo
        }
    }
return index;
}

void inicializarArray(eProducto listaProductos[] ,int tam)
{


}

int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice=dameLugarLibre(listado, tam);
    if(indice=-1)
    {
        listado[indice]=pedirProducto();
    }
    return indice;
}

