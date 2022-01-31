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
				 char* data[ ] = {"dddd", "bbbb", "aaaa", "cccc"};
                
                if((strcmp(Method,"SMOOTHSORT") != 0)){
                	putData(vetor, qt);
                	
                	printf("\n NUMEROS DESORDENADOS: \n");
                	showData(vetor, qt);
                	
                	SortingAlgorithm(Method, vetor, data, qt);
                	printf("\n \n NUMEROS ORDENADOS: \n");
                	showData(vetor, qt);
                	
           		}else{
           			
           			printf("\n PALAVRAS DESORDENADAS: \n");
                	showDataStr(data, qt);
                	
                	SortingAlgorithm("SMOOTHSORT", vetor, data, qt);
                	printf("\n \n PALAVRAS ORDENADAS: \n");
                	showDataStr(data, qt);
				}
                
                
              //  int i;
              //   for(i = 0; i < 5; i++)
              //  	printf("{%s}", data[i]);
                
                printf("\nDeseja continuar? (s/n)\n");
                v = getch();
                system("cls");
        }
    }
    printf("Saindo do Sistema...");
    while(!kbhit()){}
    return 0;
}
