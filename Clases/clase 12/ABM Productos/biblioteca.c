#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

#define ELEMENTO 3

#include "biblioteca.h"


eProducto pedirProducto()
{
    eProducto retorno;
    printf("pedir nombre\n");
    fflush(stdin);
    gets(retorno.nombre);
    printf("pedir fecha de vencimiento\n");
    fflush(stdin);
    gets(retorno.fechaDeVecimiento);
    /*printf("pedir provedor\n");
    fflush(stdin);
    gets(retorno.provedor);*/
    printf("pedir codigo de barra\n");
    fflush(stdin);
    gets(retorno.codigoDeBarra);
    printf("pedir precio\n");
    fflush(stdin);
    gets(retorno.precio);
    retorno.estado = OCUPADO;
    return retorno;
}
/*eProvedor edirprovedor()
{
    eProvedor retorno
    int id;
    char descripcion[50];
    char localidad[50];
    int cuit;
    char dueno[50];
}*/
void mostraProducto(eProducto mostrar)
{
    printf("%9s\t",mostrar.nombre);
    //printf("%8d\t",mostrar.iDproveedor);
    printf("%9s\t",mostrar.codigoDeBarra);
    printf("%9s\t",mostrar.fechaDeVecimiento);
    printf("%9d\t",atoi(mostrar.precio));
    //printf("%8d\n",mostrar.estado);
}
void mostraProvedor(eProvedor mostrar)
{
    //printf("%8d\t",mostrar.id);
    printf("%9s\t",mostrar.descripcion);
    printf("%9s\t",mostrar.localidad);
    printf("%9d\t",mostrar.cuit);
    printf("%9s\n",mostrar.dueno);
}
void cargarArray(int tam ,eProducto listado[])
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        listado[i] = pedirProducto();
    }
}
void mostrarArray(int tam,eProducto listado[])
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        if(listado[i].estado == OCUPADO)
        mostraProducto(listado[i]);
    }
}
void mostrarArrayProvedor(int tam,eProvedor listado[])
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {

        mostraProvedor(listado[i]);
    }
}

int insertProducto(int tam,eProducto listado[],eProvedor lista[])
{
    int indice;
    int opcion;
    indice = dameLugarLibre(listado , tam);
    if(indice != OCUPADO)
    {
        listado[indice] = pedirProducto();
        printf("1. YPF\n2. axion\n3. shell");
        scanf("%d",&opcion);
        lista[opcion] = buscarprovedor();
    }
    return indice;
}
/*int insertProveedor(int tam,eProvedor listado[],eProducto lista[])
{
    int indice;
    indice = insertProducto(tam,lista);
    if(indice != OCUPADO)
    {
        listado[indice] = pedirprovedor();
    }
}*/

int dameLugarLibre(eProducto listado[],int tam)
{
    int i;
    int index = OCUPADO;

    for(i = 0 ; i<tam ; i++)
    {
        if(listado[i].estado == LIBRE)
        {
            index = i;
            break;
        }

    }
    return index;
}
int borrarProducto(int tam,eProducto listado[])
{
    int i;
    char codigo[50];
    int loEncontro = 0;
    printf("ingrese el cofigo de barra: ");
    fflush(stdin);
    gets(codigo);
    for(i = 0; i < tam ; i++)
    {
        if(strcmp(listado[i].codigoDeBarra , codigo) == 0)
        {
            listado[i].estado = LIBRE;
            loEncontro = 1;
        }

    }
    if(loEncontro != 1)
        {
            printf("codigo inexistente");
        }
}




int editarProducto(int tam ,eProducto listado[])
{
    int i;
    char codigo[50];
    int loEncontro = 0;
    printf("ingrese el codigo de barra: ");
    fflush(stdin);
    gets(codigo);
    for(i = 0; i < tam ; i++)
    {
        if(strcmp(listado[i].codigoDeBarra , codigo) == 0)
        {
            printf("pedir precio nuevo\n");
            fflush(stdin);
            gets(listado[i].precio);
            loEncontro = 1;
        }

    }
    if(loEncontro != 1)
        {
            printf("codigo inexistente");
        }
}
void cargarEnCero(eProducto listado[] , int tam)
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        listado[i].estado = LIBRE;
    }
}
void inicializarProductos(eProducto lista[])
{
    char codigoDeBarra[10][13] = {"123","143","232","654","545","314","132","859","564","453"} ;
    char nombre[10][50] = {"infinia","action power","vipower","infinia disel", "action disel","zeto disel","super","acton super","normal","querosen"} ;
    char fechaDeVecimiento[10][50] = {"1/2020","2/2020","3/2020","4/2020","10/2020","8/2020","7/2020","5/2020","6/2020","12/2020"};
    char precio[10][50] = {"42","43","44","40","41","42","35","36","37","38"};
    int iDproveedor[10] = {1,2,3,1,2,3,1,2,3,1};

    int i;
    for(i = 0; i < 10 ;i++)
    {
        strcpy(lista[i].codigoDeBarra , codigoDeBarra[i]);
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].iDproveedor = iDproveedor[i];
        strcpy(lista[i].precio , precio[i]);
        strcpy(lista[i].fechaDeVecimiento,fechaDeVecimiento[i]);
        lista[i].estado = OCUPADO;
    }
}
eProvedor buscarprovedor()
{
        int i;
        eProvedor lista[i];
        int id[3] = {1 , 2 , 3};
        char descripcion[3][50] = {"petrolera" ,"petrolera" , "petrolera"};
        char localidad[3][50] = {"avellaneda" , "bahia blanca" , "rio negro"};
        int cuit[3] = {4444 , 5555 , 6666} ;
        char dueno[3][50] = { "YPF", "axion" , " shell" };
        strcpy(lista[i].descripcion , descripcion[i]);
        strcpy(lista[i].localidad,localidad[i]);
        strcpy(lista[i].dueno , dueno[i]);
        lista[i].id = id[i];
        lista[i].cuit = cuit[i];
        return lista[i];

}
void construirArray(int tam , eProducto listado[])
{
    int i;
    for(i = 0; i < tam ;i++)
    {
        listado[i].estado == LIBRE;
    }
}
void inicializarProvedor(eProvedor lista[])
{
    int id[3] = {1 , 2 , 3};
    char descripcion[3][50] = {"petrolera" ,"petrolera" , "petrolera"};
    char localidad[3][50] = {"avellaneda" , "bahia blanca" , "rio negro"};
    int cuit[3] = {4444 , 5555 , 6666} ;
    char dueno[3][50] = { "YPF", "axion" , " shell" };
    int i;
    for(i = 0; i < 3 ;i++)
    {
        strcpy(lista[i].descripcion , descripcion[i]);
        strcpy(lista[i].localidad,localidad[i]);
        strcpy(lista[i].dueno , dueno[i]);
        lista[i].id = id[i];
        lista[i].cuit = cuit[i];
    }
}
void mostrarTodo(eProducto listaProductos[], int tanprod, eProvedor listaProvedores[],int tanprov)
{
    int i;
    int j;
    printf("%9s\t%9s\t%9s%9s\t%9s\t%9s\t%9s\t%9s\n","nombre","codigo de barra","fecha vecimiento","precio","descripcion","localidad","cuit","duenio");
    for(i=0; i<tanprod;i++)
    {
        if(listaProductos[i].estado == OCUPADO)
        {
            mostraProducto(listaProductos[i]);
            for(j=0;j<tanprov;j++)
            {
                if(listaProductos[i].iDproveedor == listaProvedores[j].id)
                        mostraProvedor(listaProvedores[j]);

            }

        }


    }
}
