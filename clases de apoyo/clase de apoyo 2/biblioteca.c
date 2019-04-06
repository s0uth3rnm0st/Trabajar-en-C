int cambiarValor (int dato)
{
    dato=0; //----> le paso el 10000 a cambiarValor() y lo convierte en 0
    printf("\n lugar valor %d\n",&dato);
}

int cambiarReferencia (int *dato) //----->  le pasa la posicion de memoria 10000 //---->no retorna valor, retorna si se pudo hacer o no
{
    *dato=0;
    printf("\n lugar referencia %d\n",&*dato);
}

/********************************/

int pedirEdad(int *edad)
{
    int aux;
    int sePudo;
    int retorno=0;

    printf("ingrese su edad ");
   // sePudo=scanf("%d",&aux);   //el scan (retorna un entero) retorna 0 cuando no funciona y 1 cuando si y en esa varible guardo el valor
    if(scanf("%d",&aux)==1) //---> si es 1 leyo un entero
    {
        //-->trajo un entero
        if(aux>0 && aux<150)
        {
            *edad=aux;
            retorno= 1;
        }
    }

return retorno;

}
