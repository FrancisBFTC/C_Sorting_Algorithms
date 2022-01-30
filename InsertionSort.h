/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por inser��o em C
//
// Insertion Sort ou ordena��o por inser��o � o m�todo que percorre um vetor de elementos da esquerda para a direita 
// e � medida que avan�a vai ordenando os elementos � esquerda. Possui complexidade C(n) = O(n) no melhor caso e C(n) = O(n�) 
// no caso m�dio e pior caso. � considerado um m�todo de ordena��o est�vel.

// Um m�todo de ordena��o � est�vel se a ordem relativa dos itens iguais n�o se altera durante a ordena��o. 
// O funcionamento do algoritmo � bem simples: consiste em cada passo a partir do segundo elemento selecionar 
// o pr�ximo item da sequ�ncia e coloc�-lo no local apropriado de acordo com o crit�rio de ordena��o. 

void InsertionSort (int vet[], int tam){
    int i, j, x;
    for (i=1; i<=tam; i++){
        x = vet[i];
        j = i-1;
        vet[-1] = x; 
        while (x < vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = x;
    }
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
