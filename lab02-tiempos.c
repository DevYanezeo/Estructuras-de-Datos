#include <stdio.h>
#include <time.h>
#include <stdlib.h>

long potenciaIterativa(int base, int exponente){
    int resultado = 1;
    if (base == 0){
        if (exponente == 0){
            printf("Syntax Error");
        }
        else{
            return resultado = 0;
        }
    }
    else{
        for (int i=0;i < exponente;i++){
            resultado = base * resultado;
            }
    }
    return resultado;
}

long potenciaRecursiva(int base, int exponente) {
    if (exponente == 0) {
        return 1; 
    } else {
        return base * potenciaRecursiva(base, exponente - 1);
    }
}

int main (int argc, char * argv[])
{
	int base=atoi(argv[1]);
    int exponente=atoi(argv[2]);
    
    // long resultado = potenciaIterativa(base,exponente);
    // printf("La potencia iterativa es; %ld\n",resultado);
	// long Valor = potenciaRecursiva(base,exponente);
    // printf("La potencia Recursiva es; %ld\n",Valor);
    
	long potIt=0, potRe=0;
	clock_t ciniIt, cfinIt, ciniRe, cfinRe;
	double tiempoIt, tiempoRe;
	
	ciniIt=clock();
	potIt=potenciaIterativa(base,exponente);
	cfinIt=clock();
		
	ciniRe=clock();
	potRe=potenciaRecursiva(base,exponente);
	cfinRe=clock();
			
	tiempoIt= (double)(cfinIt-ciniIt)/CLOCKS_PER_SEC;
	tiempoRe= (double)(cfinRe-ciniRe)/CLOCKS_PER_SEC;
	printf("%d^%d %ld %f %d %ld %f\n",base, exponente, potIt,tiempoIt, potRe,tiempoRe);
    return 1;	
    
} 

