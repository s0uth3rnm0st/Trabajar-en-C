int cambiarValor(int valor)
{
    valor=999;
    return 1;
}

int cambiarValorReferencia(int* valor)
{
    printf("el valor es: %d",valor);
    *valor=999;   //puntero---> *algo, por parametro es &algo, *valor es la direccion de la ram, ahora llamada 999
    return 1;
}

int saludar()
{
    printf("hola biblioteca");
}

int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintACero(numero); //retornando el dato y guardandolo en respuesta
    if(respuesta==1) //llamo a la funcion
    {
        resultado=numero/2;
    }
    return respuesta;
}

int esDistintACero(int numero) //me dice si es !=0
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}

int factorial(int numero) //es un numero que se obtiene de la * de ingreso de un numero y todos sus antecesores
{
    int respuesta;
    if(numero==1)
    {
        return 1;   //termina la funcion
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}

int dividirPorReferencia(int datoUno,int datoDos,float *respuesta)
{
    if(datoUno!=0)
    {
        *respuesta=(float)datoUno/datoDos; //----> los guarda en el puntero (apuntar a memoria)
        return 1;
    }
    return 0;
}
