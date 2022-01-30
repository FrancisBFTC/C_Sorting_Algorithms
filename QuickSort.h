/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// O algoritmo quicksort � um m�todo de ordena��o muito r�pido e eficiente, inventado por C.A.R. Hoare em 1960[1], 
// quando visitou a Universidade de Moscovo como estudante. Naquela �poca, Hoare trabalhou em um projeto de tradu��o 
// de m�quina para o National Physical Laboratory. Ele criou o quicksort ao tentar traduzir um dicion�rio de ingl�s para russo, 
// ordenando as palavras, tendo como objetivo reduzir o problema original em subproblemas que possam ser resolvidos mais f�cil e r�pido.

// O quicksort � um algoritmo de ordena��o por compara��o n�o-est�vel. O quicksort adota a estrat�gia de divis�o e conquista. A estrat�gia 
// consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas 
// de chaves menores e maiores recursivamente at� que a lista completa se encontre ordenada.

void QuickSort (int vet[], int begin, int end){
	int i, j, pivo, aux;
	i = begin;
	j = end - 1;
	pivo = vet[(begin + end) / 2];
	while(i <= j){
		while(vet[i] < pivo && i < end){
			i++;
		}
		while(vet[j] > pivo && j > begin){
			j--;
		}
		if(i <= j){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			i++;
			j--;
		}
	}
	if(j > begin)
		QuickSort(vet, begin, j+1);
	if(i < end)
		QuickSort(vet, i, end);
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
