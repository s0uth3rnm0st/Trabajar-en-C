
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
