#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000
#define MAXPELICULAS 4

#include "pelicula.h"
#include "actor.h"
#include "genero.h"
#include "biblioteca.h"

ePelicula getPelicula(ePelicula listing[], int len)
{
    ePelicula peliculaRetorno;

    while(getStringSpaces("Ingrese el nombre de la pelicula: ",peliculaRetorno.titulo)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    getYear1894To2025("",&peliculaRetorno.anioEstreno);

    getGenero("",&peliculaRetorno.genero);

    getActor("",&peliculaRetorno.idActor);

    while(getCodigo("Ingrese el codigo de la pelicula (3 cifras, sin ceros a la izquierda):",&peliculaRetorno.codigoPelicula,listing,len)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    //getVistas(&peliculaRetorno.vistas);

    peliculaRetorno.isEmpty=OCUPADO;

    return peliculaRetorno;

}

int getVistas(int *input)
{
    int aux;
    while(getInt("ingrese la cantidad de vistas ",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<2000000)
    {
        printf("La pelicula no puede tener menos de 2.000.000 de vistas\n");
        getInt("ingrese la cantidad de vistas ",&aux);
    }

    *input=aux;
}

int getCodigo(char mensaje[], int *input,ePelicula listing[],int len)
{
    char ingreso[50];
    int retorno=0;
    int flag=1;
    int auxiliar=0;
    int i;
    int contador=0;
    printf(mensaje);
    scanf("%s",&ingreso);

    for(i=0;i<=strlen(ingreso);i++)
    {
        contador++;
        if(ingreso[i]=='.')
        {
            flag=0;
            break;
        }
    }

    if(contador!=4)
    {
        flag=0;
    }

    auxiliar=atoi(ingreso);

    if(auxiliar<100)
    {
        flag=0;
    }

    for(i=0;i<len;i++)
    {
        if(auxiliar==listing[i].codigoPelicula)
        {
            printf("Error ese codigo ya existe\n");
            flag=0;
            break;
        }

    }

    if(auxiliar>0 && flag==1)
    {
        *input=auxiliar;
        retorno=1;
    }

    return retorno;
}

void getActor(char mensaje[],int *input[])
{
    int aux;
    while(getInt("ingrese el actor:\n1) Julieta Roberto\n2) Richar Darin\n3) Nicole Kidman\n4) Tita Merelo\n5) Natalia Oreiro\n",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<1 || aux>5)
    {
        printf("ingrese un valor valido (1 a 5): ");
        getInt("",&aux);
    }

    *input=aux;
}

void getGenero(char mensaje[],char input[])
{
    int aux;
    while(getInt("ingrese el genero:\n1 para ACCION\n2 para TERROR\n3 para COMEDIA\n4 para OTRO\n",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<1 || aux>4)
    {
        printf("ingrese un valor valido (1 a 5): ");
        getInt("",&aux);
    }

    switch(aux)
    {
        case 1:
        input="ACCION";
            break;

        case 2:
        input="TERROR";
            break;

        case 3:
        input="COMEDIA";
            break;

        case 4:
        getString("Ingrese el nombre del genero: ",input);
            break;
    }
    //*input=aux;
}

int dameLugarLibre(ePelicula listing[], int len)
{
    int i;
    int index = -1; /**valor no alcanzado por el for*/

    for(i=0; i<len; i++)
    {
        if(listing[i].isEmpty==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int addPelicula(ePelicula listing[], int len)
{
    int indice;
    indice= dameLugarLibre(listing, len);
    if(indice != -1)
    {
        listing[indice]= getPelicula(listing,len);

        for(indice = 0 ; indice < len ; indice++)
        {
            listing[indice].id =  indice + 1000;
            //listing[indice].isEmpty = OCUPADO;
        }
        printf("Pelicula registrada exitosamente.\n");
    }
    else
    {
        fullArray(listing,len);
    }

    return indice;
}

void initPelicula(ePelicula listing[],int len)
{
    char titulo[MAXPELICULAS][50]={"Terminator","Thor","It","Gladiador"};
    int anioEstreno[MAXPELICULAS]={2020,2019,2018,2018};

    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i + 1000;
    }

    int codigoPelicula[MAXPELICULAS]={999,666,555,777};
    int idActor[MAXPELICULAS]={1,5,4,4};
    char genero[MAXPELICULAS][50]={"ACCION","ACCION","TERROR","ROMANTICA"};
    //int vistas[MAXPELICULAS]={3000052,7432000,2701001};


    for(i=0;i<MAXPELICULAS;i++)
    {
        strcpy(listing[i].titulo,titulo[i]);
        listing[i].anioEstreno = anioEstreno[i];
        //listing[i].idGenero = idGenero[i];
        listing[i].codigoPelicula=codigoPelicula[i];
        listing[i].idActor = idActor[i];
        strcpy(listing[i].genero,genero[i]);
        listing[i].isEmpty = OCUPADO;
    }
}

int existePelicula(ePelicula listing[],int len)
{
    int i;
    int ret=0;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            ret=1;
            break;
        }
    }
    return ret;
}

void printPelicula(ePelicula laPelicula)
{
    printf(" %d \t%s \t%d \t%d \t%d \t%s\n", laPelicula.anioEstreno,laPelicula.titulo,laPelicula.codigoPelicula,laPelicula.id,laPelicula.idActor,laPelicula.genero);
}

int mostrarArrayPelicula(ePelicula listing[], int len)
{
    int flag=0;
    if(existePelicula(listing,len))
    {
        int i;

        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)
            {
                printPelicula(listing[i]);
                flag=1;
            }
        }
    }
    else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron peliculas en el sistema!!\n");
        }
    }

}

void printPeliculaConsigna(ePelicula laPelicula)
{
    printf(" %d \t%s \t\tCODIGO: %d ID: %d\n", laPelicula.anioEstreno,laPelicula.titulo,laPelicula.codigoPelicula,laPelicula.id);
}

int mostrarArrayPeliculaConsigna(ePelicula listing[], int len)
{
    int flag=0;
    if(existePelicula(listing,len))
    {
        int i;

        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)                                       /** SE DIFECRENCIAN DE mostrarArray Y printArray*/
            {
                printPeliculaConsigna(listing[i]);                                /** YA QUE ESTAS CUMPLEN CON LA CONSIGNA DEL PARCIAL*/
                flag=1;
            }
        }
    }
    else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron peliculas en el sistema!!\n");
        }
    }

}



void construirArrayPelicula(ePelicula listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].isEmpty= LIBRE;
        strcpy(listado[i].titulo, "");
        strcpy(listado[i].genero, "");
        listado[i].anioEstreno= 0;
        //listado[i].idGenero=0;
        listado[i].id= 0;
        listado[i].idActor= 0;
        listado[i].codigoPelicula= 0;
        listado[i].vistas= 0;
    }
}

void mostrarPeliculaConActor(ePelicula peliculaListado[], eActor actorListado[], int tamPelicula, int tamActor)
{
    int i;
    int j;
    for(i=0;i<tamPelicula;i++)
    {
        if(peliculaListado[i].isEmpty==1)
        {
            for(j=0;j<tamActor;j++)
            {
                if(peliculaListado[i].idActor==actorListado[j].id)
                {
                    printf("\n| %d  | %d | %s |   %d   |  %s     \t|",peliculaListado[i].codigoPelicula,peliculaListado[i].id,peliculaListado[i].titulo,peliculaListado[i].anioEstreno, actorListado[j].nombreCompleto);
                }
            }
        }
    }
}

int deletePelicula(ePelicula listing[], int len)
{
    int i;
    int id;
    int loEncontro = 0;

    if(existePelicula(listing,len))
    {
        getInt("Ingrese el ID: ",&id);

        for(i=0; i<len; i++)
        {
            if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
            {
                listing[i].isEmpty = LIBRE;
                printf("Pelicula removida exitosamente.\n");
                loEncontro = 1;
                break;
            }

        }
    }
    else
    {
        printf("Aun NO se cargaron peliculas en el sistema!!\n");
        loEncontro = 1;
    }

    if(loEncontro==0)
    {
        printf("ID inexistente!!\n\n");
    }

    return 0;
}

int editPelicula(ePelicula listing[], int len)
{
    int i;
    int id;
    int loEncontro = 0;
    int exit=1;
    char opcionChar[50];
    int opcion;

    if(existePelicula(listing,len))
    {
    getInt("Ingrese el ID: ",&id);

        for(i=0; i<len; i++)
        {
            if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
            {
                printf("Ingrese a continuacion el numero de lo que quiere modificar\n");

                while(exit==1)
                    {
                        printf("\n\t1.Cambiar TITULO\n\t2.Cambiar ANIO DE ESTRENO\n\t3.Cambiar ACTOR\n\t4.VOLVER\n");
                        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
                        {
                            system("cls");
                            printf("1.Cambiar TITULO\n\t2.Cambiar ANIO DE ESTRENO\n\t3.Cambiar ACTOR\n\t4.VOLVER\n");
                            printf("OPCION INCORRECTA!! debe ser un numero.\n");
                        }

                        opcion=atoi(opcionChar);

                        switch(opcion)
                        {
                            case 1:
                                for(i=0; i<len; i++)
                                {
                                    if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
                                    {
                                        while(getStringSpaces("Ingrese el nombre de la pelicula: ",listing[i].titulo)==0)
                                        {
                                            printf("ERROR, ingrese un dato valido\n");
                                        }

                                        loEncontro=1;

                                        printf("Titulo modificado exitosamente.\n");

                                        break;
                                    }
                                }
                                break;

                            case 2:
                                for(i=0; i<len; i++)
                                {
                                    if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
                                    {
                                        getYear1894To2025("",&listing[i].anioEstreno);

                                        loEncontro=1;

                                        printf("Anio modificado exitosamente.\n");

                                        break;
                                    }
                                }
                                break;

                            case 3:
                                for(i=0; i<len; i++)
                                {
                                    if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
                                    {
                                        getActor("",&listing[i].idActor);

                                        loEncontro=1;

                                        printf("Actor modificado exitosamente.\n");

                                        break;
                                    }
                                }
                                break;

                            case 4:
                                exit = 0;
                                break;

                            default:
                                printf("Opcion incorrecta, reingrese...\n");
                                break;
                        }
                        system("pause");
                        system("cls");
                    }
                loEncontro=1;
            }
        }
    }
    else
    {
        printf("Aun NO se cargaron peliculas en el sistema!!\n");
        loEncontro = 1; //1 para que no diga id inexistente
    }

    if(loEncontro==0)
    {
        printf("ID inexistente!!\n");
    }

   return 0;
}

void sortPelicula(ePelicula listing[], int len)
{
    ePelicula aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].titulo>listing[j].titulo)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(strcmpi(listing[i].titulo,listing[j].titulo)==1)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }
}

void sortAnio(ePelicula listing[], int len)
{
    ePelicula aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].anioEstreno>listing[j].anioEstreno)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].anioEstreno==listing[j].anioEstreno)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }
}

void ordenarPeliculasPorIdYCritetrio(ePelicula lista[],int tam,int criterio)
{

    int i;
    int j;
    ePelicula auxiliar;
    int tipoDeOrden;



    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(criterio==1)
            {
                tipoDeOrden=lista[i].id<lista[j].id;
            }else{
                tipoDeOrden=lista[i].id>lista[j].id;
            }
            if(tipoDeOrden)
            {
                auxiliar=lista[i];
                lista[i]=lista[j];
                lista[j]=auxiliar;
            }
        }
    }
}

/*
int MaxVistas(ePelicula maximo, ePelicula minimo,int len)
{
    int result;
    int max=0;
    int min=0;
    int i;

    for(i=0;i<len;i++)
    {
        if (maximo.vistas > max)
        {
            max = maximo.vistas;
        }
        else
        {
            min = minimo.vistas;
        }
    }
    printf("\nLA PELI MAS VISTA ES: %d\n",max);
    return max;
}

int MaxNota(eAlumno maximo[],int len)
{
    int result;
    eAlumno max;
    int i;

    for(i=0;i<len;i++)
    {
        if (maximo[i].nota < max)
        {
            max = maximo[i].nota;
        }
    }
    printf("\nLA NOTA MAS ALTA ES: %d\n",max);
    return 0;
}
*/

void mostrarPeliculaConGeneroYActor(ePelicula peliculaListado[], eActor actorListado[], int tamPelicula, int tamActor)
{
    int i;
    int j;
    for(i=0;i<tamPelicula;i++)
    {
        if(peliculaListado[i].isEmpty==1) //se usa un for por cada estructura a
        {
            //printf("\n%5s %15d %4d",alumnoListado[i].nombreAlumno,alumnoListado[i].nota, alumnoListado[i].id);
            for(j=0;j<tamActor;j++)
            {
                if(peliculaListado[i].idActor==actorListado[j].id)
                {
                    printf("*%s - %s - %s\n",peliculaListado[i].titulo,actorListado[j].nombreCompleto,peliculaListado[i].genero);
                    break;

                }
            }
        }
    }
}


void mostrarPeliculaPaisActorEEUU(ePelicula peliculaListado[], eActor actorListado[], int tamPelicula, int tamActor)
{
    int i;
    int j;
    for(i=0;i<tamPelicula;i++)
    {
        if(peliculaListado[i].isEmpty==1) //se usa un for por cada estructura a
        {
            //printf("\n%5s %15d %4d",alumnoListado[i].nombreAlumno,alumnoListado[i].nota, alumnoListado[i].id);
            for(j=0;j<tamActor;j++)
            {
                if(peliculaListado[i].idActor==actorListado[j].id)
                {
                    //printf("\n%s",peliculaListado[i].titulo);
                    if(!strcmp(actorListado[j].paisOrigen,"EEUU  "))
                    {
                        printf("*%s",peliculaListado[i].titulo);
                    }

                   // break; //porque es uno a muchos
                }
            }
        }
    }
}

