/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por MERGESORT

// Criado em 1945 pelo matem�tico americano John Von Neumann o Mergesort � um exemplo de algoritmo de ordena��o que faz uso da estrat�gia 
// �dividir para conquistar� para resolver problemas. � um m�todo est�vel e possui complexidade C(n) = O(n log n) para todos os casos. 
// Esse algoritmo divide o problema em peda�os menores, resolve cada peda�o e depois junta (merge) os resultados. O vector ser� dividido em 
// duas partes iguais, que ser�o cada uma divididas em duas partes, e assim at� ficar um ou dois elementos cuja ordena��o � trivial. 
// Para juntar as partes ordenadas os dois elementos de cada parte s�o separados e o menor deles � selecionado e retirado de sua parte. 
// Em seguida os menores entre os restantes s�o comparados e assim se prossegue at� juntar as partes.
//


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

/* Adapta��o do MergeSort para utiliza��o do TimSort */
void Merge(int arr[], int l, int m, int r){
	int len1 = m - l + 1, i;
	int len2 = r - m;
	int left[len1], right[len2];
	
	for(i = 0; i < len1; i++)
		left[i] = arr[l + i]; // Preenchendo array da esquerda
		
	for(i = 0; i < len2; i++)
		right[i] = arr[m + 1 + i]; // Preenchendo array da direita
	
	i = 0;
	int j = 0;
	int k = l;
	
	while(i < len1 && j < len2){ // Iterar em ambas os vetores esquerda e direita
		if(left[i] <= right[j]){ // O elemento IF � esquerda � menor que o incremento i empurrando para um array maior
			arr[k] = left[i];
			i++;
		}else {                  // O elemento no array direito � maior
			arr[k] = right[j]; 
			j++;
		}
		k++;
	}
	
	while(i < len1){ // Este loop copia o elemento restante no array esquerdo
		arr[k] = left[i];
		k++;
		i++;
	}
	
	while(j < len2){ // Este loop copia o elemento restante no array direito
		arr[k] = right[j];
		k++;
		j++;
	}
	
}


/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
