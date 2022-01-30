/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

// O algoritmo quicksort é um método de ordenação muito rápido e eficiente, inventado por C.A.R. Hoare em 1960[1], 
// quando visitou a Universidade de Moscovo como estudante. Naquela época, Hoare trabalhou em um projeto de tradução 
// de máquina para o National Physical Laboratory. Ele criou o quicksort ao tentar traduzir um dicionário de inglês para russo, 
// ordenando as palavras, tendo como objetivo reduzir o problema original em subproblemas que possam ser resolvidos mais fácil e rápido.

// O quicksort é um algoritmo de ordenação por comparação não-estável. O quicksort adota a estratégia de divisão e conquista. A estratégia 
// consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas 
// de chaves menores e maiores recursivamente até que a lista completa se encontre ordenada.

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

/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
