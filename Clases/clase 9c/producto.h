#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

// ABM: alta, baja, modificacion.

typedef struct
{
    char codigoDeBarra[13]; // es un ID, y no se debe modificar en editarProducto
    float precio;
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    int estado; //no se debe modificar en editarProducto

}eProducto;




#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();

void inicializarArray(eProducto listaProductos[] ,int tam);

void construirArray(int tam, eProducto listado[]);
void mostrarProducto(eProducto);
void cargarArray(int tam, eProducto listado[]); //cargar producto
void mostrarArray(int tam, eProducto listado[]);
int dameLugarLibre(eProducto listado[], int tam);
int insertarProducto(eProducto listado[], int tam);
