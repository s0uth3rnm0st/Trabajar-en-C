#include <stdio.h>
#include <stdlib.h>

int pedirOpcionMenu(char texto[]);  //---->vector

int main()
{
   int opcion;
   char seguir = 's';

   do
   {
        opcion = pedirOpcionMenu(" 1. Alta\n 2. Baja\n 3. Modificacion\n 4. Informes\n");//es un prompt //-----> parametros actuales

        switch(opcion)
        {
            case 1:
                printf("Estoy dando de alta\n");
                break;

            case 2:
                printf("Estoy dando de baja\n");
                break;

            case 3:
                printf("Estoy modificando\n");
                break;

            case 4:
                printf("Estoy informando\n");
                break;

            case 5:
                seguir = 'n';
                break;

            default:
                printf("Opcion incorrecta, reingrese\n");
                break;
       }
       system("pause");
       system("cls");
   }while(seguir=='s');
    return 0;
}

int pedirOpcionMenu(char texto[])  //----->paramatro formal (son siempre iguales)
    {
     int opcion;

        printf("%s",texto);

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        return opcion;
    }
