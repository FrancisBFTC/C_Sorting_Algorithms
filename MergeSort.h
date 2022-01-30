/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

// Ordenação por MERGESORT

// Criado em 1945 pelo matemático americano John Von Neumann o Mergesort é um exemplo de algoritmo de ordenação que faz uso da estratégia 
// “dividir para conquistar” para resolver problemas. É um método estável e possui complexidade C(n) = O(n log n) para todos os casos. 
// Esse algoritmo divide o problema em pedaços menores, resolve cada pedaço e depois junta (merge) os resultados. O vector será dividido em 
// duas partes iguais, que serão cada uma divididas em duas partes, e assim até ficar um ou dois elementos cuja ordenação é trivial. 
// Para juntar as partes ordenadas os dois elementos de cada parte são separados e o menor deles é selecionado e retirado de sua parte. 
// Em seguida os menores entre os restantes são comparados e assim se prossegue até juntar as partes.  


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


/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
