/* ==========================================
*           ALGORITMOS DE ORDENAÇAO
*             criado por Francis
*  ===========================================
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "CombSort.h"
#include "GnomeSort.h"
#include "CockTailSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "ShellSort.h"
#include "RadixSort.h"
#include "HeapSort.h"

//Variáveis de manipulaçao
int   q = 0;
char  v = 's';
char* Method = "";
bool  out = false, noExist = false;


//Mostrar Dados do vetor
void showData(int vetor[], int tam){
     int i;
     for(i = 0; i < tam; i++){
          printf("(%d) ", vetor[i]);
     }
}

//Colocar Dados no vetor
void putData(int vetor[], int tam){
     int i;
      for(i = 0; i < tam; i++){
          printf("Digite o valor %d: ", i);
          scanf("%d", &vetor[i]);
      }     
}

//Escolha do algoritmo de ordenação
void SortingAlgorithm(char* Alg, int vet[], int tam){
          if(Alg == "SELECTIONSORT")
                 SelectionSort(vet, tam);
          else if(Alg == "INSERTIONSORT")
                     InsertionSort(vet, tam);
          else if(Alg == "BUBBLESORT")
              		 BubbleSort(vet, tam);
          else if(Alg == "COMBSORT")
          			 CombSort(vet, tam);
          else if(Alg == "GNOMESORT")
          			 GnomeSort(vet, tam);
          else if(Alg == "COCKTAILSORT")
          			 CockTailSort(vet, tam);
          else if(Alg == "QUICKSORT")
          			 QuickSort(vet, 0, tam);
          else if(Alg == "MERGESORT")
          			 MergeSort(vet, 0, tam-1);
          else if(Alg == "SHELLSORT")
          		     ShellSort(vet, tam);
          else if(Alg == "RADIXSORT")
          			 RadixSort(vet, tam);
          else if(Alg == "HEAPSORT")
          			 HeapSort(vet, tam);
          else{
            printf("Este Metodo ainda nao existe no sistema!");	
		  }
} 

//Informações de opções na tela
void Options(){
    int quant;
    int Op;
    
    printf("Insira a quantidade de dados : ");
    scanf("%d", &quant);
    q = quant; 
    
    printf("Escolha o Método de Ordenacao: \n\n");
    printf("[1] - SelectionSort\n");
    printf("[2] - InsertionSort\n");
    printf("[3] - BubbleSort\n");
    printf("[4] - CombSort\n");
    printf("[5] - GnomeSort\n");
    printf("[6] - CockTailSort\n");
    printf("[7] - QuickSort\n");
    printf("[8] - MergeSort\n");
    printf("[9] - ShellSort\n");
    printf("[10] - RadixSort\n");
    printf("[11] - HeapSort\n");
    printf("[0] - Cancelar\n");
    scanf("%d", &Op);
    
    switch(Op){
         case 1: Method = "SELECAO";
                 break;
         case 2: Method = "INSERCAO";
                 break;
      	 case 3: Method = "BUBBLESORT";
      	 		 break;
      	 case 4: Method = "COMBSORT";
      	 		 break;
      	 case 5: Method = "GNOMESORT";
      	 		 break;
      	 case 6: Method = "COCKTAILSORT";
      	 		 break;
         case 7: Method = "QUICKSORT";
                 break;
         case 8: Method = "MERGESORT";
                 break;
         case 9: Method = "SHELLSORT";
                 break;
         case 10: Method = "RADIXSORT";
         		  break;
         case 11: Method = "HEAPSORT";
         		  break;
         case 0: printf("\nVoce cancelou!\n");
         		 out = true;
         		 break;
         default: 
                noExist = true;
                break;
                  
                     
    }
    printf("\n------------------------------\n");
    printf("Metodo de %s", Method);
    printf("\n------------------------------\n");
    
}                   

//Metodo Principal que executa as funções
int main(void){
    system("title Algoritmos de Ordenacao");
    if(!out){
        while(v == 's'){
                Options();
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
