/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

//Ordenação por seleção
//
// A ordenação por seleção ou selection sort consiste em selecionar o menor item e colocar 
// na primeira posição, selecionar o segundo menor item e colocar na segunda posição, segue 
// estes passos até que reste um único elemento. Para todos os casos (melhor, médio e pior caso) 
// possui complexidade C(n) = O(n²) e não é um algoritmo estável. 

void SelectionSort (int vet[], int tam){
    int i, j, min, x;
    for (i = 0; i < tam-1; i++){
        min = i;
        for (j = i+1; j < tam; j++){
            if (vet[j] < vet[min])
               min = j;
        }
        x = vet[min];
        vet[min] = vet[i];
        vet[i] = x;
    }
}

/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
