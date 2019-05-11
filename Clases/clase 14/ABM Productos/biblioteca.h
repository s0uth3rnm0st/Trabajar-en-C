#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    float precio;
    char nombre[50];
    int idProveedor;
    //char proveedor[50];
    char codigoDeBarra[50];
    char fechaDeVencimiento[50];
    int estado;//
}eProducto;

typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    int cuit;
    char duenio[50];
    int estado;
}eProveedor;

/*


void inicializarProductos(eProducto[],int);//OK

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);



int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );
**/

int insertarProducto(eProducto [], int );
eProducto pedirProducto();
int dameLugarLibre(eProducto[],int);

void inicializarProveedores(eProveedor listaProvedores[], int tam);
void inicializarProductos(eProducto listaProductos[], int tam);

void mostrarTodo(eProducto listaProducto[], int tamProd, eProveedor listaProveedor[], int tamProv);
void mostrarProducto(eProducto unProducto);
void mostrarProveedor(eProveedor unProveedor);

void mostrarProductoConProveedor(eProducto productoListado[], eProveedor proveedorListado[], int tamProducto, int tamProveedor); //reglas de estilo: func en ingles, documentar, lower camel case, defines por sobre todo

void mostrarProveedorConSusProductos(eProveedor[], eProducto[], int, int);
