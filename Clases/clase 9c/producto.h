#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

// ABM: alta, baja, modificacion.

typedef struct
{
    char codigoDeBarra[13];
    float precio;
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    char estado[1];

}eProducto;




#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();
void construirArray(int tam, eProducto listado[]);
void mostrarProducto(eProducto);
void cargarArray(int tam, eProducto listado[]);
void mostrarArray(int tam, eProducto listado[]);

