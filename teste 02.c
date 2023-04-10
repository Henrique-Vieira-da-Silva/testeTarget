
#include <stdio.h>

double numero = 144;

int main()
{
    double antecessor=1,contador=1;
    
    while(contador < numero){
        contador+=antecessor;
        antecessor = contador-antecessor;
    }
    if(numero == contador){
        printf("O numero %lf é pertencente a sequencia de Fibonacci",numero);
        return(0);
    }
    printf("O numero %lf não é pertencente a sequencia de Fibonacci",numero);
    return 0;
}
