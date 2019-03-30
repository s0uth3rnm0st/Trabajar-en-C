
int dividir(int datoUno, int datoDos, float *resultado) //puntero al resultado
{
    float aux;
    int retorno;

    if(datoDos!=0)
    {
        aux=(float)datoUno/datoDos;
        *resultado=aux;
        retorno= 1;
    }
    return retorno;

}

int pedirDato(int *dato)
{
    int aux;
    int sePudo;
    int retorno=0;

    printf("ingrese dato ");
   // sePudo=scanf("%d",&aux);   //el scan (retorna un entero) retorna 0 cuando no funciona y 1 cuando si y en esa varible guardo el valor
    if(scanf("%d",&aux)==1) //---> si es 1 leyo un entero
    {
            *dato=aux;
            retorno= 1;
    }

return retorno;

}
