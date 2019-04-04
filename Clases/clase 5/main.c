#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //char usuario [10];    //(no son 10 palabras)es un vector decaracteres tomado como un solo dato, o sea string
    char usuario [][10]={"Maria","Jose","Jesus","Melchor","Gaspar"}; //array de arrays, el primero hace saltar de palabra en poalabra y el segundo dice que empiece en el lugar 0 de la palabra
    int nota[10]={8,5,2,10,3};
    int i;
    int j;

    for(i=0;i<5;i++)
    {
        printf("hello %s - nota:%d \n",usuario[i],nota[i]);
    }

    for(i=0;i<5;i++)//recorre de a uno
    {
        for(j=0;j<4;j++)//compara con los demas
        {
            printf("%d => %d \n",nota[i],nota[j]);
            if(nota[i]<nota[j])
            {
                int aux = nota[i];
                nota[i]=nota[j];//intercambio de vasos de fanta y coca con un tercer aux vacio"
                nota[j]=aux;    //pero no se manienen los nombres

                swap()
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("hello %s - nota:%d \n",usuario[i],nota[i]);
    }

   /*
    for(i=0;i<5;i++)
    {
        //usuario[i][0]=" "; // no siempre anda
        strcpy(usuario[i],""); //inicializo array
    }

    for(i=0;i<5;i++)
    {
        printf("ingrese usuario #%d: ",i+1);
        scanf("%s",usuario[i]);
        printf("ingrese nota: ",i+1);
        scanf("%d",&nota);
    }

    //strcpy(usuario[0],"hola"); //pasa el hola al puntero usuario[0]
    printf("test %s \n",usuario[0]);
    printf("test %s \n",usuario[1]);



    printf("ingrese su usuario: ");
    //scanf("%s",usuario[0]); //el nombre de la variable es la direccion de memoria
    scanf("%s",usuario[1]);
    int tamanio= strlen(usuario[8]);  //strlen busca el \0, cuando lo encuentra retorna i
    printf("tamaño: %d \n",tamanio);

*/
    return 0;
}
