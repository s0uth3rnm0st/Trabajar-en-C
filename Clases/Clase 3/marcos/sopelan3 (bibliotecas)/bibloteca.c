int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintoCero(numero);
    if(respuesta==1)
    {
        resultado =numero/2;
    }
    return respuesta;
}
int esDistintoCero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}
int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}
int cambiarvalor(int valor)
{
    valor=999;
    return 1;
}
int cambiarValorReferencia(int* valor)
{
    printf("el valor es: %d\n",*valor);
    *valor=999;
    return 1;
}
float dividirporReferencia(int datouno, int datodos , float *respuesta)
{
    if(datouno!=0)
    {
        *respuesta=(float)datouno/datodos;
        return 1;
    }
    return 0;

}
