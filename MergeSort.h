/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por MERGESORT

// Criado em 1945 pelo matem�tico americano John Von Neumann o Mergesort � um exemplo de algoritmo de ordena��o que faz uso da estrat�gia 
// �dividir para conquistar� para resolver problemas. � um m�todo est�vel e possui complexidade C(n) = O(n log n) para todos os casos. 
// Esse algoritmo divide o problema em peda�os menores, resolve cada peda�o e depois junta (merge) os resultados. O vector ser� dividido em 
// duas partes iguais, que ser�o cada uma divididas em duas partes, e assim at� ficar um ou dois elementos cuja ordena��o � trivial. 
// Para juntar as partes ordenadas os dois elementos de cada parte s�o separados e o menor deles � selecionado e retirado de sua parte. 
// Em seguida os menores entre os restantes s�o comparados e assim se prossegue at� juntar as partes.  


void MergeSort(int *vector, int begin, int end) {
    int i, j, k, halfSize, *vectorTemp;
    if(begin == end) return;
    halfSize = (begin + end ) / 2;

    MergeSort(vector, begin, halfSize);
    MergeSort(vector, halfSize + 1, end);

    i = begin;
    j = halfSize + 1;
    k = 0;
    vectorTemp = (int *) malloc(sizeof(int) * (end - begin + 1));

    while(i < halfSize + 1 || j  < end + 1) {
        if (i == halfSize + 1 ) { 
            vectorTemp[k] = vector[j];
            j++;
            k++;
        } else {
            if (j == end + 1) {
                vectorTemp[k] = vector[i];
                i++;
                k++;
            } else {
                if (vector[i] < vector[j]) {
                    vectorTemp[k] = vector[i];
                    i++;
                    k++;
                } else {
                    vectorTemp[k] = vector[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = begin; i <= end; i++) {
        vector[i] = vectorTemp[i - begin];
    }
    free(vectorTemp);
}


/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
