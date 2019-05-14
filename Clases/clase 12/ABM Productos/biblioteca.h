#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO -1
typedef struct{
    char codigoDeBarra[13];
    char fechaDeVecimiento[50];
    int iDproveedor;
    char nombre[50];
    char precio[50];
    int estado;
}eProducto;
typedef struct{
    int id;
    char descripcion[50];
    char localidad[50];
    int cuit;
    char dueno[50];

}eProvedor;

eProducto pedirProducto();
void mostraProducto(eProducto);
void cargarArray(int tam ,eProducto listado[]);
void mostrarArray(int tam,eProducto listado[]);
void construirArray(int tam , eProducto listado[]);
int insertProducto(int tam,eProducto[],eProvedor lista[]);
int dameLugarLibre(eProducto[],int tam);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(int,eProducto[]);
int editarProducto(int ,eProducto[]);
void cargarEnCero(eProducto[] , int);
void inicializarProductos(eProducto lista[]);
void inicializarProvedor(eProvedor lista[]);
void mostrarTodo(eProducto listaProductos[], int tamprod, eProvedor listaProvedores[],int tanprov);
void mostraProvedor(eProvedor mostrar);
void mostrarArrayProvedor(int tam,eProvedor listado[]);
int insertProveedor(int tam,eProvedor listado[],eProducto lista[]);
eProvedor buscarprovedor();
