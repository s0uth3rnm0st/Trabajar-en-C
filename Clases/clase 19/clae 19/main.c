#include <stdio.h>
#include <stdlib.h>
#define T 5

    typedef struct
    {
        int id;
        char name[50];
        float sueldo;
    }eEmployee;



int main()
{
    printf("%d \n",sizeof(eEmployee));
    printf("%d \n",sizeof(eEmployee*));

    /****************************************/

    int* x; //apunta a basura
    x = (int*) malloc(sizeof(int)); //devuelve un puntero a void, y un puntero a void devuelve cualquier cosa
                                    //lo casteo a lo que es, o sea visto ese generico en algo mas especifico
    if(x!=NULL)//luego de hacer un mallo pregunto si apunta a algun lugar, o a nada (NULL)
    {
        *x=7;  //y ahora si puedo asignar un valor
    }

    //CALLOC: reserva espacio en memoria, pero inicializa esos elementos en 0
    x = (int*) calloc(sizeof(int),1);
    if(x!=NULL)
    {
        printf("el valor es %d\n",*x);
    }




    /***********************************************/

    x = (int*) calloc(sizeof(int),T);
    int i;
    if(x!=NULL)
    {
        for(i=0;i<T;i++)
        {
            printf("%d  \n",*(x+i));
        }
        printf("\n");
        for(i=0;i<T;i++)
        {
            printf("%d \n",*x+i);
        }

        for(i=0;i<T;i++)
        {
            printf("ingrese num: ");
            scanf("%d",(x+i));
        }
        for(i=0;i<T;i++)
        {
            printf("%d  \n",*(x+i));
        }
        printf("agrego 5 mas: \n");

        int aux;
        aux=(int*)realloc(x,sizeof(int)*(T+5));//conviene trabajar con un aux porque se pueden perder datos si da NULL
        if(aux!=NULL)
        {
            x=aux;
            for(i=T;i<T+5;i++)
            {
                printf("ingrese num: ");
                scanf("%d",(x+i));
            }
            for(i=0;i<T+5;i++)
            {
                printf("%d\n", *(x+i));
            }

        }

        printf("quito 4:\n");
        x=(int*)realloc(x,sizeof(int)*(T+5-4));

        for(i=0;i<T+5-4;i++)
        {
            printf("%d\n",*(x+i));
        }
    }

    return 0;
}
