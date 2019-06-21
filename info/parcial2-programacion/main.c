#include <stdio.h>
#include <stdlib.h>

typedef struct
{ 	int legajo;
 	float nota;
}eAlumno;

eAlumno* alumnoNew();
int eAlumno_setLegajo(eAlumno* this, int legajo);
int eAlumno_setNota(eAlumno* this, float nota);

int main()
{
	eAlumno* alumno;

	alumno=alumnoNew();
	if(eAlumno_setLegajo(alumno,325))
    {
        if(eAlumno_setNota(alumno,8.25))
        {
            printf("LEGAJO: %d\n",alumno->legajo);
            printf("NOTA: %f\n",alumno->nota);
            //ok
        }
    }
}

eAlumno* alumnoNew()
{
	eAlumno* e;
	e=(eAlumno*)malloc(sizeof(eAlumno));
	return e;
}

int eAlumno_setLegajo(eAlumno* this, int legajo)
{
	int retorno=0;
	if(this!=NULL)
	{
		this->legajo=legajo;
		retorno=1;
	}
	return retorno;
}

int eAlumno_setNota(eAlumno* this, float nota)
{
	int retorno=0;
	if(this!=NULL)
	{
		this->nota=nota;
		retorno=1;
	}
	return retorno;
}
