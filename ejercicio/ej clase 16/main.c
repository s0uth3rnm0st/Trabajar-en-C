#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int age;
    char id[50];
}S_Person;

int loadPerson(S_Person* pPerson);

void printPerson(S_Person* pPerson);


int main()
{

    S_Person laPersona;

    loadPerson(&laPersona);  //if
    printPerson(&laPersona);

    return 0;
}

int loadPerson(S_Person* pPerson)
{
    int ret=1;
    getString("Ingrese nombre",pPerson->name);

    pPerson->age = getInt("Ingrese la edad");
    if(pPerson->age<=0 || pPerson->age>100)
    {
        ret=0;
    }
    if(getStringNumeros("ingrese el dni",pPerson->id)==0)
    {
        ret=0;
    }


    return ret;
}

void printPerson(S_Person* pPerson)
{
    printf("Nombre: %s Edad: %d DNI: %s",pPerson->name,pPerson->age,pPerson->id);
}

