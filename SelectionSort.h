/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

//Ordena��o por sele��o
//
// A ordena��o por sele��o ou selection sort consiste em selecionar o menor item e colocar 
// na primeira posi��o, selecionar o segundo menor item e colocar na segunda posi��o, segue 
// estes passos at� que reste um �nico elemento. Para todos os casos (melhor, m�dio e pior caso) 
// possui complexidade C(n) = O(n�) e n�o � um algoritmo est�vel. 

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

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
