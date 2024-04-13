#include <stdio.h>
#include <stdlib.h> 
int soma(int,int);
int multiplica(int,int);

int main(int argc, char *argv[]){
        if(argc == 3){
                int firstArg = atoi(argv[1]);
                int secondArg = atoi(argv[2]);
                int resultado;
                resultado = soma(firstArg, secondArg);
                printf("soma: %d\n", resultado);
                resultado = multiplica(firstArg, secondArg);
                printf("multiplicacao: %d\n", resultado);
                return 0;
        }
}