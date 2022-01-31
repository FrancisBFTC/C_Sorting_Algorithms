/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por Sele��o
//
// A ordena��o por sele��o ou selection sort consiste em selecionar o menor item e colocar 
// na primeira posi��o, selecionar o segundo menor item e colocar na segunda posi��o, segue 
// estes passos at� que reste um �nico elemento. Para todos os casos (melhor, m�dio e pior caso) 
// possui complexidade C(n) = O(n�) e n�o � um algoritmo est�vel. 

#define SSWAP(A, B) aux = A; A = B; B = aux;

void SelectionSort (int vector[], int size){
    int i, j, minor, aux;                           // Declara as vari�veis
    for (i = 0; i < size-1; i++){                   // La�o externo que come�a na 1� posi��o
        minor = i;                                  // seleciona o (1� ou 2� ou ... N�) �ndice atual
        for (j = i+1; j < size; j++){               // La�o interno que percorre todo o array come�ando pelo �ndice ap�s o selecionado
            if (vector[j] < vector[minor])          // Se o item atual for menor que o item na N� posi��o selecionada (�ndice atual)
               minor = j;                           // Redefine a vari�vel "menor" para o �ndice com o menor item
        }                                           // Itera no la�o interno at� que o �ndice seja igual ao tamanho do array
        SSWAP(vector[minor], vector[i]);            // Faz a troca do menor valor selecionado com a N� posi��o selecionada
    }
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
