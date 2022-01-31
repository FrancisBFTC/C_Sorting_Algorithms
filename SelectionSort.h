/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

// Ordenação por Seleção
//
// A ordenação por seleção ou selection sort consiste em selecionar o menor item e colocar 
// na primeira posição, selecionar o segundo menor item e colocar na segunda posição, segue 
// estes passos até que reste um único elemento. Para todos os casos (melhor, médio e pior caso) 
// possui complexidade C(n) = O(n²) e não é um algoritmo estável. 

#define SSWAP(A, B) aux = A; A = B; B = aux;

void SelectionSort (int vector[], int size){
    int i, j, minor, aux;                           // Declara as variáveis
    for (i = 0; i < size-1; i++){                   // Laço externo que começa na 1ª posição
        minor = i;                                  // seleciona o (1ª ou 2ª ou ... Nª) índice atual
        for (j = i+1; j < size; j++){               // Laço interno que percorre todo o array começando pelo índice após o selecionado
            if (vector[j] < vector[minor])          // Se o item atual for menor que o item na Nª posição selecionada (índice atual)
               minor = j;                           // Redefine a variável "menor" para o índice com o menor item
        }                                           // Itera no laço interno até que o índice seja igual ao tamanho do array
        SSWAP(vector[minor], vector[i]);            // Faz a troca do menor valor selecionado com a Nª posição selecionada
    }
}

/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
