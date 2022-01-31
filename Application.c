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
                
                int vetor[qt];
				char* data[6] = {"dddd", "bbbb", "aaaa", "cccc", "ffff", "eeee"};
                
                if((strcmp(Method,"SMOOTHSORT") != 0)){
                	putData(vetor, qt);
                	
                	printf("\n NUMEROS DESORDENADOS: \n");
                	showData(vetor, qt);
                	
                	SortingAlgorithm(Method, vetor, data, qt);
                	printf("\n \n NUMEROS ORDENADOS: \n");
                	showData(vetor, qt);
                	
                	printf("\n");
                	
                	if(strcmp(Method, "BOGOSORT") == 0)
                		printf("\nParabens! Voce esta com Sorte. :)\n\n");
                	
           		}else{
           			
           			printf("\n PALAVRAS DESORDENADAS: \n");
                	showDataStr(data, 6);
                	
                	SortingAlgorithm("SMOOTHSORT", vetor, data, qt);
                	printf("\n \n PALAVRAS ORDENADAS: \n");
                	showDataStr(data, 6);
				}
                
                
                printf("\nDeseja continuar? (s/n)\n");
                v = getch();
                system("cls");
        }
    }
    printf("Saindo do Sistema...");
    while(!kbhit()){}
    return 0;
}
