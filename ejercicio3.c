#include<stdio.h>

int signo(int numero)
{
    int salida = 0;
    if (numero < 0)
        salida = -1;
    else if (numero == 0)
        salida = 0;
    else
        salida = 1;
   return salida;
}

int main()
{
    int resultado = 0;
    int numero = 0;
    
    printf("Ingrese numero\n");
    scanf("%d", &resultado);
    numero = signo(resultado);
    printf("El numero ingresado es: 1(positivo), 0 (cero), y -1 (negativo)%d ", numero);
    return 0;

}


     
