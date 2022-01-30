#include "SortingAlgorithms.h"                  

//Metodo Principal que executa as funções
int main(void){
    system("title Algoritmos de Ordenacao");
    if(!out){
        while(v == 's'){
                SortOptions();
                if(out) break;
                if(noExist){ 
                    printf("Este metodo ainda nao existe no Sistema!\n");         
                    break;
                }
                noExist = false;
                
                int vetor[q];
                putData(vetor, q);
                
                printf("\n NUMEROS DESORDENADOS: \n");
                showData(vetor, q);
                
                SortingAlgorithm(Method, vetor, q);
                printf("\n \n NUMEROS ORDENADOS: \n");
                showData(vetor, q);
                
                printf("\nDeseja continuar? (s/n)\n");
                v = getch();
                system("cls");
        }
    }
    printf("Saindo do Sistema...");
    while(!kbhit()){}
    return 0;
}
