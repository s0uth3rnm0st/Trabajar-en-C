#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

#define ELEMENTO 3
#define TAM 10

#include "biblioteca.h"

/*
eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existeProducto(eProducto unProducto,eProducto lista[])
{

}


int borrarProducto(eProducto lista[], int tam)
{


 int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
          lista[i].estado = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}

void inicializarProductos(eProducto listaProductos[],int tam)
{

    float precio[3]={50,42.95,9.52};
    char nombre[3][50]={"Agua 2Lt","Cap. Espacio","Turron"};
    char proveedor[3][50]={"Coca-Cola","Bagley","Arcor"};

    char codigoDeBarra[3][13]={"77951234","77959876","70"};

    char fechaDeVencimiento[3][50]={"22/10/2020","10/05/2019","15/12/2008"};

    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }



}

int editarProducto(eProducto lista[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}
*/
/****************************************/
void inicializarProveedores(eProveedor listaProvedores[], int tam)
{

    int id[ELEMENTO]={1, 2, 3};
    char descripcion[ELEMENTO][50]={"Petrolera", "Petrolera", "Petrolera"};
    char localidad[ELEMENTO][50]={"Avellaneda", "Bahia Blanca", "Rio Negro"};
    int cuit[ELEMENTO]={444,555,666};
    char duenio[ELEMENTO][50]={"YPF", "Axion","Shell"};

    int i;

    for(i=0;i<3;i++)
    {
        listaProvedores[i].id=id[i];
        listaProvedores[i].cuit=cuit[i];
        strcpy(listaProvedores[i].descripcion,descripcion[i]);
        strcpy(listaProvedores[i].localidad,localidad[i]);
        //strcpy(listaProvedores[i].cuit,cuit[i]);
        strcpy(listaProvedores[i].duenio,duenio[i]);
    }
}

void inicializarProductos(eProducto listaProductos[], int tam)
{
    float precio[10]={42, 43 ,44, 40 ,41, 42, 35, 36, 37 ,38};
    char nombre[10][50]={"infinia", "axionPower", "vPower", "infiniaDiesell", "axionDiesell", "vPowerDiesell", "super", "axionSuper", "normal", "kerosene"};
    int idProveedor[10]={1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    char codigoDeBarra[10][50]={"100", "101", "102", "103", "104", "105", "106", "107", "108", "109"};
    char fechaDeVencimiento[10][50]={"1/1/2021", "2/2/2021", "3/3/2021", "4/4/2021", "5/5/2021", "6/6/2021", "7/7/2021", "8/8/2021", "9/9/2021", "10/10/2021"};
    // nombre= infinia axionPower vPower infiniaDiesell axionDiesell vPowerDiesell super axionSuper normal kerosene

    int i;

    for(i=0;i<10;i++)
    {
        listaProductos[i].precio = precio[i];
        strcpy(listaProductos[i].nombre,nombre[i]);
        listaProductos[i].idProveedor = idProveedor[i];
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].fechaDeVencimiento,fechaDeVencimiento[i]);
        listaProductos[i].estado = OCUPADO;
    }
}



void mostrarTodo(eProducto listaProducto[], int tamProd, eProveedor listaProveedor[], int tamProv)
{
    int i;
    int j;
    for(i=0; i<tamProd; i++)
    {
        mostrarProducto(listaProducto[i]);
        for(j=0; j<tamProv; j++)
        {
            if(listaProducto[i].idProveedor==listaProveedor[j].id)
            mostrarProveedor(listaProveedor[j]);
        }
    }
}

void mostrarProducto(eProducto unProducto)
{
    printf("%f %15s \tID:%d\t\t codigo:%13s %15s\n", unProducto.precio, unProducto.nombre, unProducto.idProveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento);
}

void mostrarProveedor(eProveedor unProveedor)
{
    printf("ID:%d\t  %15s %15s\t cuit:%15d %15s\n\n\n", unProveedor.id, unProveedor.descripcion, unProveedor.localidad, unProveedor.cuit, unProveedor.duenio);
}

int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}

int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}



/******************/
/******************/
/******************/
//hacer mas y min
/******************/
/******************/
/******************/



void mostrarProductoConProveedor(eProducto productoListado[], eProveedor proveedorListado[], int tamProducto, int tamProveedor)
{
    int i;
    int j;
    for(i=0;i<tamProducto;i++)
    {
        if(productoListado[i].estado==1) //se usa un for por cada estructura a
        {
            printf("%5s %15s %4f\n",productoListado[i].codigoDeBarra,productoListado[i].nombre, productoListado[i].precio);
            for(j=0;j<tamProveedor;j++)
            {
                if(productoListado[i].idProveedor==proveedorListado[j].id)
                {
                    printf("%5s %15s %4f %s",productoListado[i].codigoDeBarra,productoListado[i].nombre, productoListado[i].precio, proveedorListado[j].descripcion);
                    break; //porque es uno a muchos
                }
            }
        }
    }
}

void mostrarProveedorConSusProductos(eProveedor proveedorListado[], eProducto productoListado[], int tamProveedor, int tamProducto)
{
    int i;
    int j;

    if(proveedorListado[i].estado==OCUPADO) //tiene que tener un estado

    {
        printf("%5d %s\n",proveedorListado[i].id,proveedorListado[i].duenio);
        for(j=0;j<tamProducto;j++)
        {
            if(proveedorListado[i].id==productoListado[j].idProveedor)
            {
                printf("%5d %s\n",proveedorListado[i].id,proveedorListado[i].duenio,productoListado[j].nombre);
            }
        }
    }
}
