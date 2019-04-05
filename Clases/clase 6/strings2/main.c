#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*******************/

int main()
{
    char nombre[50]; //(50 bytes) si me paso del 49 PUEDO entrar en lugar de memoria donde hay variables
    int largo;
    int compara;


    printf("ingrese su nombre: ");
    //scanf("%s",nombre);//no se pone & porque un vector ya representa una direc de mem (redundante)
    //fgets(nombre,50,stdin); //win/linux (lee un caracter mas)
    scanf("%[^\n]",nombre);
    //gets(nombre); //se pueden usar espacios

    largo = strlen(nombre);

    printf("\nsu nombre es: %s y el largo es %d\n",nombre,largo);

    if(nombre=="pepe")
    {
        printf("se llama pepe");
    }


    compara=stricmp(nombre,"pepe"); //strcmp es key sensitive, el stricmp no (ignore)
    if(compara==0)
    {
        printf("\nhola pepe\n");
        printf("%d",compara);
    }
    else
    {
        printf("\nusted no es pepe\n");
        printf("%d",compara);
    }


    return 0;
}
